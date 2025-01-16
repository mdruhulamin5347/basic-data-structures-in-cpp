

// maximum height count for binary tree


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
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty()){
        //1.ber kore ante hobe.
        Node* p = q.front();
        q.pop();
        
        //2.sei node ke niye kaj korte hobe
        int l,r;
        Node* myLeft,*myRight;
        cin >> l >> r;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        //3.child push korte hobe
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int height_count(Node* root){
    if(root==NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 0;
    int l = height_count(root->left);
    int r = height_count(root->right);
    return max(l,r)+1;
}
int main(){
    Node* root = input_tree();
    cout << height_count(root);
    return 0;
}