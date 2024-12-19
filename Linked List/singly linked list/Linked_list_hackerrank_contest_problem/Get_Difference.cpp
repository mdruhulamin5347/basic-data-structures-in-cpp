
// problem number 1

// Problem Statement

// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

// Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

// Input Format

// Input will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
// -10^9 <= V <= 10^9; Here V is the value of each node.
// Output Format

// Output the difference between the maximum and minimum value.


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

void insert_at_tail(Node* &head,Node* &tail, int val)
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

int max_value(Node* head)
{   
    int mx = INT_MIN;
    for(Node* i = head; i != NULL; i = i->next)
    {
        if(mx < i->val)
        {
            mx = i->val;
        }
    }
    return mx;
}

int min_value(Node* head)
{
    int mn = INT_MAX;
    for(Node* i = head; i != NULL; i = i->next)
    {
        if(mn > i->val)
        {
            mn = i->val;
        }
    }
    return mn;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int mx = max_value(head);
    int mn = min_value(head);

    cout << abs(mx - mn) << endl;
    return 0;
}