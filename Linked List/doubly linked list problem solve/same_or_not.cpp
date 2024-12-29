

// check two linked list value same or not for doubly linked list


// Question: Take two doubly linked lists as input and check if they are the same or not.

// Sample Input
// Sample Output
// 10 20 30 40 50 -1
// 10 20 30 40 50 -1
// YES
// 10 20 30 40 50 -1
// 10 20 30 40 -1
// NO
// 10 20 30 40 -1
// 10 20 30 40 50 -1
// NO
// 10 20 30 40 -1
// 40 30 20 10 -1
// NO
// 1 2 3 4 5 -1
// 5 4 1 2 6 -1
// NO




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
    newNode->prev = tail;
    tail = newNode;
}


void same_or_not(Node* head,Node* head2)
{
    bool flag = true;
    while(head != NULL && head2 != NULL)
    {
        if(head->val != head2->val)
        {
            flag = false;
            break;
        }
        head = head->next;
        head2 = head2->next;
    }
    if(head != NULL || head2 != NULL)
        flag = false;
    if(flag)
        cout << "YES";
    else 
        cout << "NO";
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;;
        }
        insert_at_tail(head,tail,val);
    }
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;;
        }
        insert_at_tail(head2,tail2,val);
    }
    same_or_not(head,head2);    
    return 0;
}