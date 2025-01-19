

// binary search for BST


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
    int val;
    Node* root;
    cin >> val;
    if(val==-1) root = NULL;
    else root = new Node(val);
    q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        int l,r;
        Node* myLeft,*myRight;
        cin >> l >> r;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

bool search(Node* root,int x){
    if(root==NULL) return false;
    if(root->val == x) return true;
    if(root->val > x)
        return search(root->left,x);
    else 
        return search(root->right,x);    
}

int main(){
    Node* root = input_tree();
    int x;
    cin >> x;  
    if(search(root,x)) cout << "Found";
    else cout << "Not Found";
    return 0;
}