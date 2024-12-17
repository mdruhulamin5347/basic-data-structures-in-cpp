


// insert at tail optimized way


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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode; 
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
    Node* head = new Node(30);
    Node* a = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = tail;
    insert_at_tail(head,tail,100);
    insert_at_tail(head,tail,200);
    insert_at_tail(head,tail,300);

    node_data_print(head);
    return 0;
}