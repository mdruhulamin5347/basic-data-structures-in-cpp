
// problem number 2

// Problem Statement

// You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X. Your task is to determine whether X is present in the linked list or not. If it is present, print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.

// Note: You must use a singly linked list; otherwise, you will not receive marks.

// Input Format

// First line will contain T, the number of test cases.
// First line of each test case will contain the values of the singly linked list, and will terminate with -1.
// Second line of each test case will contain X.
// Constraints

// 1 <= T <= 100
// 1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
// -10^9 <= V <= 10^9; Here V is the value of each node.
// -10^9 <= X <= 10^9
// Output Format

// Output the index of X in the linked list.



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

void search_value(Node* head,int x)
{   
    int count = 0;
    int idx = 0;
    for(Node* i = head; i != NULL; i = i->next)
    {
        count++;
    }
    for(Node* i = head; i != NULL; i = i->next)
    {        
        if(x == i->val){
            break;
        }
        idx++;     
    }   
    if(count <= idx)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << idx << endl;
    }    
}

int main(){
    
    int t;
    cin >> t;
    while(t--)
    {   
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
        int x;
        cin >> x;
        search_value(head,x);       
        
    }
    return 0;
}