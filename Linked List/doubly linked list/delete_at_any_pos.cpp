

// delete at any position without head and tail for doubly linked list


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void delete_at_any_pos(Node* head,int idx)
{       
    for(int i=1; i<idx; i++)
    {
        head = head->next;
    }
    Node* deleteNode = head->next;
    head->next = head->next->next;
    head->next->prev = head;
    delete deleteNode;
    
}

void node_data_print_forward(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    delete_at_any_pos(head,1);   
    node_data_print_forward(head);
    
    return 0;
}

