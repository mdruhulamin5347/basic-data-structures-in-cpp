
// insert at any position for doubly linked list

// Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.

// Sample Input
// 6
// 0 10
// 1 20
// 4 30
// 0 30
// 1 40
// 5 50
// Sample Output
// 10
// 10
// 10 20
// 20 10
// Invalid
// 30 10 20
// 20 10 30
// 30 40 10 20
// 20 10 40 30
// Invalid


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

int count_size_function(Node* head)
{
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    
}
void insert_at_any_pos(Node* head,Node* tail,int idx,int val)
{
    Node* newNode = new Node(val);
    for(int i=1; i<idx; i++)
    {
        head = head->next;
    }
    newNode->next = head->next;
    head->next->prev = newNode;
    newNode->prev = head;
    head->next = newNode;    
}

void insert_ay_tail(Node* &head,Node* &tail,int val)
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

void node_data_print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void reverse_print(Node* tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int t;
    cin >> t;
    while(t--)
    {
        int idx,val;
        cin >> idx >> val;

        int count_size = count_size_function(head);
        if(idx == 0)      
            insert_at_head(head,tail,val);            
        else if( 0 < count_size && idx < count_size)    
            insert_at_any_pos(head,tail,idx,val);   
        else if(count_size  == idx)   
            insert_ay_tail(head,tail,val);
        else if(idx > count_size)
        {
            cout << "Invalid" << endl;            
            continue;
        }          
             
        node_data_print(head);    
        cout << endl;    
        reverse_print(tail);
        cout << endl;
    }
    
    return 0;
}

