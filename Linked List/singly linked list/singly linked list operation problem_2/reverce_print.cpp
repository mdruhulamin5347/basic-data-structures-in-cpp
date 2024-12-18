

// // problem number 2 


// Question: Take a singly linked list as input and print the reverse of the linked list.

// Sample Input
// 5 4 8 6 2 1 -1
// 1 2 3 4 -1
// Sample Output
// 1 2 6 8 4 5
// 4 3 2 1




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
    tail = newNode;
}


void reverce_data_print(Node* head)
{   
    if(head == NULL)
    {
        return;
    }          
    reverce_data_print(head->next);
    cout << head->val << " "; 
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
 
    reverce_data_print(head);
    return 0;
}

