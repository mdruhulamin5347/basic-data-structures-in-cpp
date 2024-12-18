


// delete at any position without head



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
    tail = newNode;
}

void delete_at_any_pos(Node* head,int idx)
{   
    for(int i=1;i<idx;i++)
    {
        head = head->next;
    }
    Node* deleteNode = head->next;
    head->next = head->next->next;
    delete deleteNode;
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
    int idx;
    cin >> idx;
    delete_at_any_pos(head,idx);
    node_data_print(head);
    return 0;    
}