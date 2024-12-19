

// problem number 3

// Problem Statement

// You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain the values of the first singly linked list, and will terminate with -1.
// Second line will contain the values of the second singly linked list, and will terminate with -1.
// Constraints

// 1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output "YES" or "NO".




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

int size_count(Node* head)
{
    int count = 0;
    for(Node* i=head; i != NULL; i = i->next)
    {
        count++;
    }
    return count;
}

bool check_value(Node* head,Node* head1){   
   
    while(head != NULL && head1 != NULL)
    {
        if(head->val != head1->val)
        {
            return 0;
        }
        head = head->next;
        head1 = head1->next;
    }
    return 1;       
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;
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
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }
    int first_node = size_count(head);
    int second_node = size_count(head1);
    if(first_node != second_node)
    {
        cout << "NO" << endl;
        return 0;
    }   
    if(check_value(head,head1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}