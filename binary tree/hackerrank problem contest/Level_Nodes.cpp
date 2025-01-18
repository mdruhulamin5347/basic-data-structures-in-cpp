

// problem 4

// Problem Statement

// You will be given a binary tree as input in level order. Also you will be given a level . You need to print all the node's values in that level from left to right. Assume that level starts from .

// For example:

// image

// If , then the output for the above tree will be: 40 50 60

// Note: If the level  is not a valid level, the print "Invalid".

// Input Format

// Input will contain the binary tree in level order.  means there is no node available.
// Constraints

//  Maximum number of nodes 
//  Node's value 
// Output Format

// Output all the node's values in level .





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

int height_node(Node* root){
    if(root==NULL) 
        return 0;
    int l = height_node(root->left);
    int r = height_node(root->right);
    return max(l,r)+1;
}
void print_level_value(Node* root,int x){
    vector<int>v;
    queue<pair<Node*,int>>q;
    if(root)
        q.push({root,0});
    while(!q.empty()){
        //1. pair ber kore ante hobe.
        pair<Node*,int> parent = q.front();
        q.pop();
        Node* node = parent.first;
        int level = parent.second;

        //2.pair niye kaj korte hobe.
        if(level==x){
            v.push_back(node->val);
        }

        //3.hode er child thakle pair push korte hobe
        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    for(int val : v){
        cout << val << " ";
    }
}


int main(){
    Node* root = input_tree();    
    int x;
    cin >> x;
    int height = height_node(root);
    if(x>=height){
        cout << "Invalid";
        return 0;
    }
    print_level_value(root,x);
    return 0;
}