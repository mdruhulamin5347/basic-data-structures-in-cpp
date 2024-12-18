


//problem number 5


// Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.

// Sample Input
// 1 5 6 8 9 -1
// 2 4 6 5 8 4 -1
// Sample Output
// YES
// NO




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

void node_data_print(Node* head)
{
    Node* temp = head;
    int flag = 1;
    while(temp->next != NULL)
    {
        if(temp->val > temp->next->val)
        {
            flag = 0;
            break;
        }
        temp = temp->next;
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

