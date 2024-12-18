


// problem 1


// Question: Take a singly linked list as input and print the size of the linked list.

// Sample Input
// 2 1 5 3 4 8 9 -1
// 5 1 4 5 -1

// Sample Output
// 7
// 4




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

void node_data_print(Node* temp)
{
  
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;

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

