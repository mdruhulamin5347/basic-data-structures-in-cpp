
// problem number 3

// Problem Statement

// You will be given a binary tree as input in level order. You need to tell if the binary tree is perfect or not. A binary tree is called perfect if all leaf nodes are at the maximum depth of the tree, and the tree is completely filled with no gaps.

// Here is an example of perfect binary tree:

// image

// Also there is formula available to tell if a binary tree is perfect or not. The formula is :

// Total number of nodes = -1
// Note: Here depth is counted from . In the above image maximum depth is , so total number of nodes are . So there should be  nodes to call it a perfect binary tree.

// Input Format

// Input will contain the binary tree in level order.  means there is no node available.
// Constraints

//  Maximum number of nodes 
//  Node's value 
// Output Format

// Output  if the tree is perfect,  otherwise.


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


int count_node(Node* root){
    if(root==NULL)
        return 0;
    if(root->left == NULL && root->right==NULL)
        return 1;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;
}
int count_height(Node* root){
    if(root==NULL)
        return 0;
    int l = count_height(root->left);
    int r = count_height(root->right);
    return max(l,r)+1;
}
int main(){
    Node* root = input_tree();
    int number_of_node = count_node(root);
    int height_of_node = count_height(root);
    int istrue = (pow(2,height_of_node))-1;
    if(number_of_node == istrue)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}