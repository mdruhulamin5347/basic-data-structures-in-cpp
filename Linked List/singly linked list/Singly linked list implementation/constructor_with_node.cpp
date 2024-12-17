

// implement create node with constructor function



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
    Node a(10);
    Node b(30);
    Node c(50);
    a.next = &b;
    b.next = &c;

    cout << a.val << " " << a.next->val << " " << a.next->next->val<< " " << endl;
    return 0;
}