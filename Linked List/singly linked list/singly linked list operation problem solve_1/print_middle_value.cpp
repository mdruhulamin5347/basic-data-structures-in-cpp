


// problem number 3


// Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

// Sample Input
// 2 4 6 8 10 -1
// 1 2 3 4 5 6 -1
// Sample Output
// 6
// 3 4


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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void node_data_print(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    int middle = count / 2;
    Node* tp = head;
    for(int i=1; i<middle; i++)
    {
        tp = tp->next;
    }
    if(count%2==0)
    {
        cout << tp->val << " " << tp->next->val << endl;
    }
    else
    {
        cout << tp->next->val << endl;
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

    node_data_print(head);
    
    return 0;
}

