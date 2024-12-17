

// insert data at head 



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


void insert_at_head(Node* &head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
  
    Node* head = new Node(20);
    Node* a = new Node(30);
    Node* b = new Node(40);

    head->next = a;
    a->next = b;

    insert_at_head(head,50);
    insert_at_head(head,100);
    insert_at_head(head,1000);
    node_data_print(head);
    return 0;
}