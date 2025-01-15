

// level order input for binary tree



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

Node* level_order_intput(){
    queue<Node*>q;
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root)
        q.push(root);
    while(!q.empty()){

        //1. queue theke ber korte hobe.
        Node* p = q.front();
        q.pop();

        //2. ber kora node re niye kaj  korte hobe.

        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        //3.node er child thakle push korte hobe.
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
    

}

void level_order_print(Node* root){
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

    Node* root = level_order_intput();
    level_order_print(root);
    return 0;
}