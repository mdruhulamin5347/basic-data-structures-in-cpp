
// problem number 2

// Problem Statement

// You will be given a binary tree as input in level order. You need to print the values of leaf nodes in descending order.

// For example:

// image

// The output for the above tree will be: 60 50 40

// Input Format

// Input will contain the binary tree in level order.  means there is no node available.
// Constraints

//  Maximum number of nodes 
//  Node's value 
// Output Format

// Output the values of leaf nodes in descending order.





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

vector<int>v;
vector<int> reverse_leaf_node(Node* root){
    if(root == NULL)
        return v;
    if(root->left == NULL && root->right == NULL)
        v.push_back(root->val);
    reverse_leaf_node(root->left);
    reverse_leaf_node(root->right);
    return v;
}

int main(){
    Node* root = input_tree();
    vector<int>ans = reverse_leaf_node(root);
    reverse(ans.begin(),ans.end());
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}