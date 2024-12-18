


// problem number 4


// Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.



// Sample Input
// 10 20 30 -1
// 1 40
// 5 50
// 4 50
// 0 100
// 7 40
// 1 110
// 7 40

// Sample Output
// 10 40 20 30
// Invalid
// 10 40 20 30 50
// 100 10 40 20 30 50
// Invalid
// 100 110 10 40 20 30 50
// 100 110 10 40 20 30 50 40




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

void insert_at_head(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insert_at_any_pos(Node* head,int idx, int value)
{
    Node* newNode = new Node(value);
    for(int i=1; i<idx; i++)
    {
        head = head->next; 
    }
    newNode->next = head->next;
    head->next = newNode;
}

int node_size_count(Node* temp)
{
    int count = 0;  
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
    int value;
    int idx;
    cin >> idx >> value;
    int count = node_size_count(head);    
    if(idx == 0)
    {
        insert_at_head(head,value);
    }
    else if(idx < count && idx > 0)
    {
        insert_at_any_pos(head,idx,value);
    }
    else if(idx == count)
    {
        insert_at_tail(head,tail,value);      
    }
    else
    {
        cout << "Invalid" << endl;           
    }
    if(idx <= count)
    {
        node_data_print(head); 
    }
      
    
    return 0;
}

