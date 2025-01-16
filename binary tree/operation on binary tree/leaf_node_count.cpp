

// leaf node count for binary tree


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
        // 1. queue thkee node ber kore ante hobe.
        Node* p = q.front();
        q.pop();

        //2. oi node re niye kaj korte hobe.
        int l,r;
        cin >> l >> r;
        Node* myLeft,*myRight;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        //3. child push korte hobeee
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;

}

int count_leaf_node(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l+r;
}

int main(){
    Node* root = input_tree();
    cout << count_leaf_node(root);
    return 0;
}