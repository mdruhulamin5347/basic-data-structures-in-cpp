
// check palindrom for doubly linkedlist


// Question: Take a doubly linked list as input and check if it forms any palindrome or not.

// Sample Input
// Sample Output
// 10 20 30 20 10 -1
// YES
// 10 20 30 30 20 10 -1
// YES
// 10 20 30 40 20 10 -1
// NO
// 10 20 30 20 40 -1
// NO
// 10 20 30 10 10 -1
// NO
// 10 20 20 20 10 -1
// YES


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

bool palindrom(Node* head,Node* tail)
{
    for(Node* i=head, *j=tail; i != j && i->prev != j; i=i->next,j=j->prev)
    {
        if(i->val != j->val)
        {
            return 0;
        }
    }
    return 1;
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
    
    if(palindrom(head,tail))    
        cout << "YES";
    else 
        cout << "NO";    

    return 0;
}