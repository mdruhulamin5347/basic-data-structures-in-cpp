

// creating a Node


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
};

int main(){
    Node a,b,c;    
    a.val = 20;
    a.next = &b;
    b.val = 40;
    b.next = &c;
    c.val=50;
    c.next = NULL;
    cout << a.val << " " << a.next->val << " " << a.next->next->val << endl;
    return 0;
}