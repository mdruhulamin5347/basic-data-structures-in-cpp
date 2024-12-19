

// problem number 5

// Problem Statement

// You will be given a singly linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list.

// The process is, for each node N, traverse from that node and delete all nodes where the values are same with N.

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output the final linked list where there will be no duplicate values.




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
    tail =newNode;

}


void delete_duplicate(Node* head,Node* &tail) {
    while (head != NULL) {
        Node* i = head;
        Node* j = head->next;
   
        while (j != NULL) {
            if (head->val == j->val) { 
                i->next = j->next; 
                if(j == tail)
                {
                    tail = i;
                }
                delete j; 
                j = i->next;
            } else {
                i = j;
                j = j->next;
            }
        }
        head = head->next; 
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
    delete_duplicate(head,tail);    
    node_data_print(head);
    return 0;
}
