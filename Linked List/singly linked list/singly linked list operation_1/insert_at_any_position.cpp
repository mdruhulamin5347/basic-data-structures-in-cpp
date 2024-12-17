



// insert at any position in linked list



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

void insert_at_anyposition(Node* temp,int idx, int val)
{
    Node* newNode = new Node(val);
    for(int i=1; i<idx; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_anyposition(head,2,100);
    insert_at_anyposition(head,2,200);
    insert_at_anyposition(head,2,300);
    node_data_print(head);    
    return 0;
}