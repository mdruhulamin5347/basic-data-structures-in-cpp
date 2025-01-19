
// array to BST convert


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

Node* array_to_bst(int arr[],int l,int r){    
    if(l>r)
        return NULL;
    int mid = (l+r)/2;    
    Node* root = new Node(arr[mid]);
    root->left = array_to_bst(arr,l,mid-1);
    root->right = array_to_bst(arr,mid+1,r);
    return root;
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
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    Node* root = array_to_bst(arr,0,n-1);
    level_print(root);
    return 0;
}
