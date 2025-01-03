

// sorting 

// Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.

// Sample Input
// Sample Output
// 1 4 5 2 7 -1
// 1 2 4 5 7
// 20 40 30 10 50 60 -1
// 10 20 30 40 50 60



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
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void sort_function(Node* head)
{
    for(Node* i=head; i->next != NULL; i=i->next)
    {
        for(Node* j=i->next; j != NULL; j=j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
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

    sort_function(head);
    node_data_print(head);    
    return 0;
}

