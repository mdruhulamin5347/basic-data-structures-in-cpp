


// Singly Linked List Detect Cycle



#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};


int main(){
    Node* head = new Node(10);
    Node* a = new Node(30);
    Node* b = new Node(40);
    Node* c = new Node(50);
    Node* tail = new Node(20);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
    tail->next = b;

    Node* fast = head;
    Node* slow = head;
    bool flag = false;
    while(fast->next != NULL && fast != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            flag = true;
            break;
        }        
    }
    if(flag)
        cout << "Cycle Detected" <<endl;
    else
        cout << "Cycle Not Detected" << endl;
   
    return 0;
}