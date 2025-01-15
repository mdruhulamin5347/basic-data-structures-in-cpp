


// level order print for binary tree


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

void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        //1.queue theke ber kore anbo.
        Node * item = q.front();
        q.pop();
        //2.print korbo.
        cout << item->val << " " ;
        //3.left right chiled push korbo
        if(item->left)
            q.push(item->left);
        if(item->right)
            q.push(item->right);
    }
}

int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = e;

    level_order(root);
    return 0;
}