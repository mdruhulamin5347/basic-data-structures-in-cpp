

// problem number 2


// Problem Statement

// You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

// Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

// Input Format

// Input will contain the values of the doubly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output "YES" if it forms a palindrom otherwise output "NO".


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

bool palindrome(Node* head, Node* tail)
{    
    while(head != NULL && tail != NULL)
    {
        if(head->val != tail->val)
        {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
    
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
    if(palindrome(head,tail))
    {
        cout << "YES" << endl;
    } 
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}