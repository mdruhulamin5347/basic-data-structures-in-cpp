

// node count for binary tree


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
        //1. queue theke ber kore ana.
        Node* p = q.front();
        q.pop();
        //2. ber kore ana node re niye kaj kora.
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l== -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight; 
        //3. node er chile queue te push kora.
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void level_print(Node* root){
    queue<Node*>q;
    q.push(root);    
    while(!q.empty()){
        //1.queue theke node ber korte hobe.
        Node* p = q.front();
        q.pop();
        
        //2.node re niye kaj korte hobe.
        cout << p->val << " ";

        //3. node er child queue te push korte hobe.
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

int count_node(Node* root){
    if(root==NULL){
        return 0;
    }
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;
}
int main(){
    Node* root = input_tree();
    
    cout << "count node: ";
    cout << count_node(root) << endl;

    cout << "print all Node value: ";
    level_print(root);
    return 0;
}