

// problem number 4


// Problem Statement

// You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// If X is 0 that means you will insert the value V to the head of the linked list.
// If X is 1 then you will insert the value V to the tail of the linked list.
// If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
// After each query you need to print the linked list.
// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain Q.
// Next Q lines will contain X and V.
// Constraints

// 1 <= Q <= 1000;
// 0 <= X <= 2;
// 0 <= V <= 10^9
// Output Format

// For each query ouput the updated linked list.


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

void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }    
}

void insert_at_tail(Node* &head, Node* &tail,int val)
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

void delete_at_head(Node* &head,Node* &tail)
{
    if(head == NULL)
    {
        return;
    }
    if(head->next == NULL)
    {           
        head = NULL;
        tail = NULL;
        delete head;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}



void delete_at_any_pos(Node* head,int idx)
{   
    for(int i=1;i<idx;i++)
    {
        head = head->next;
    }
    Node* deleteNode = head->next;
    head->next = head->next->next;
    delete deleteNode;
}

void delete_at_tail(Node* head,Node* &tail,int idx)
{   
    for(int i=1;i<idx;i++)
    {
        head = head->next;
    }
    Node* deleteNode = head->next;
    head->next = head->next->next;
    tail = head;
    delete deleteNode;
}

int size_cout(Node* head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;   
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
    int q;
    cin >> q;
    while(q--)
    {
        int x,v;
        cin >> x >> v;
        if(x==0)
        {
            insert_at_head(head,tail,v);
        }
        else if(x==1)
        {
            insert_at_tail(head,tail,v);            
        }
        else if(x==2)
        {
            int linked_size = size_cout(head);            
            if(v==0)
            {
                delete_at_head(head,tail);
            }
            else if(0 < v && v < linked_size -1)
            {
                delete_at_any_pos(head,v);
            }
            else if(linked_size - 1 == v)
            {
                delete_at_tail(head,tail,v);
            }
            
        }
        node_data_print(head);
        cout << endl;
    }
    return 0;
}