

// node insert in binarty node


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

void insert(Node* root,int x){
    if(root==NULL)
    {
        root = new Node(x);
        return;
    }        
    if(root->val > x){
        if(root->left==NULL)
            root->left = new Node(x);
        else
            insert(root->left,x);        
    }
    else{
        if(root->right==NULL)
            root->right = new Node(x);
        else
            insert(root->right,x);
    } 
}

void level_print(Node* root){
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
int main(){
    Node* root = input_tree();
    int x;
    cin >> x;  
    insert(root,x);
    level_print(root);
    return 0;
}