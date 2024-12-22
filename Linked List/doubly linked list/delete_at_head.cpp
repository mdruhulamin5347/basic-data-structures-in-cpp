


// delete at head for doubly linked list



// insert at any position without head and tail for doubly linked list





// insert at tail for doubly linked list




// doubly linked list value insert at head





// implementation and doubly linkedlist printing


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

void delete_at_head(Node* &head, Node* &tail)
{    
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
    
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

    delete_at_head(head,tail);   
    node_data_print_forward(head);
    
    return 0;
}
