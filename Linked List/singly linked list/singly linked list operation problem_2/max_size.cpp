

// problem number 3


// Question: Take a singly linked list as input, then print the maximum value of them.

// Sample Input
// 2 4 1 3 5 4 2 5 -1
// 5 4 1 2 5 6 8 4 1 3 -1
// Sample Output
// 5
// 8





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

int max_size(Node* head)
{
    int mx_size = INT_MIN;
    for(Node* i=head; i != NULL; i = i->next)
    {
        if(mx_size < i->val)
        {
            mx_size = i->val;
        }
    }
    return mx_size;
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

    int mx = max_size(head);
    cout << mx << endl;
    return 0;
}







