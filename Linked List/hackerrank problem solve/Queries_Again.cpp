

// problem number 4

// Problem Statement

// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// You need to insert the value V at index X. Assume that index starts from 0.
// After that for each query you need to print the linked list from left to right and right to left.
// If the index is invalid, then print "Invalid".
// Note: You must use Doubly Linked List, otherwise you will not get marks.

// Input Format

// First line will contain Q.
// Next Q lines will contain X and V.
// Constraints

// 1 <= Q <= 1000;
// 0 <= X <= 1000;
// 0 <= V <= 1000
// Output Format

// For each query print the linked list from left to right and right to left or print "Invalid" as asked.
// Print "L -> " before printing the linked list from left to right.
// Print "R -> " before printing the linked list from right to left.


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

void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insert_at_any_pos(Node* head, Node* tail,int idx,int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1;i<idx; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

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

int node_size(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
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

void node_data_print_reverse(Node* tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout <<  temp->val << " ";
        temp = temp->prev;
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

        int size = node_size(head);

        if(x == 0)       
            insert_at_head(head,tail,v);
        else if(x == size)
            insert_at_tail(head,tail,v);
        else if(0 < x && x < size)
            insert_at_any_pos(head,tail,x,v);
        else 
        {
            cout << "Invalid" << endl;
            continue;
        }

        cout << "L -> " ;
        node_data_print(head);
        cout << endl;
        
        cout << "R -> " ; 
        node_data_print_reverse(tail);  
        cout<< endl;
              
    } 

    return 0;
}