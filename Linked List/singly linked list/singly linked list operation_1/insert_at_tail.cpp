


// insert at tail


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

void insert_at_tail(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
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
    Node* head = new Node(30);
    Node* a = new Node(30);
    Node* b = new Node(40);

    head->next = a;
    a->next = b;
    insert_at_tail(head,100);
    insert_at_tail(head,200);
    insert_at_tail(head,300);
    node_data_print(head);
    return 0;
}