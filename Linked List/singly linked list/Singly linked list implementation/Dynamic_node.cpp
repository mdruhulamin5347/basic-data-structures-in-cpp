




// Dynamic Node implementation



#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){

    Node* a = new Node(20);
    Node* b = new Node(40);
    Node* c = new Node(50);

    a->next = b;
    b->next = c;   


    cout << a->val << " " << a->next->val << " " << a->next->next->val<< " " << endl;

    return 0;
}