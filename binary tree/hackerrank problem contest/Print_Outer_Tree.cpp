
// problem number 5

// Problem Statement

// You will be given a binary tree as input in level order. You need to print the outer side of the binary tree. See the sample input output for more clarifications. You need to print from the left most leaf node to right most leaf node.

// For example:

// image

// The output for the above tree will be: 90 40 20 10 30 50 60

// Input Format

// Input will contain the binary tree in level order.  means there is no node available.
// Constraints

//  Maximum number of nodes 
//  Node's value 
// Output Format

// Output the left most leaf node to right most leaf node.



#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    queue<Node*>q;
    Node* root;
    int val;
    cin >> val;
    if(val==-1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty()){
        //1.queue theke node ber kore ante hobe.
        Node* parent = q.front();
        q.pop();

        //2.ber kore ana node re niye kaj korte hobe.
        int l,r;
        Node* myLeft,*myRight;
        cin >> l >> r;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        //3.node er child thakle queue te push korte hobe.
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

void left_site(Node* root){
    if(root==NULL)
        return;
    if(root->left)
        left_site(root->left);
    else if(!root->left)
        left_site(root->right);
    cout << root->val << " ";
    return;
}
void right_site(Node* root){
    if(root==NULL)
        return;    
    cout << root->val << " ";
    if(root->right)
        right_site(root->right);
    else if(!root->right)
        right_site(root->left);
    return;   
}

int main(){
    Node* root = input_tree();
    
    if(root->left)
        left_site(root->left);

    if(root)
        cout << root->val << " ";
    
    if(root->right)
        right_site(root->right);

    return 0;
}