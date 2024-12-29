
// input data and reverce for doubly linked list


// Question: Take a doubly linked list as input and reverse it. After that print the linked list.

// Sample Input
// Sample Output
// 10 20 30 -1
// 30 20 10

// 10 20 30 40 -1
// 40 30 20 10



#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next  = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void reverse_linkedlist(Node* head,Node* tail)
{
    for(Node* i=head, *j=tail; j != i && i->prev != j; i = i->next, j=j->prev)
    {
        swap(i->val,j->val);
    }
}

void node_data_print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    reverse_linkedlist(head,tail);
    node_data_print(head);
    return 0;
}
