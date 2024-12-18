

// problem number 1


// Question: Take two singly linked lists as input and check if their sizes are same or not.

// Sample Input
// 2 1 5 3 4 9 -1
// 1 2 3 4 5 6 -1

// 5 1 4 5 -1
// 5 1 4 -1
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

void insert_at_tail(Node* &head,Node* &tail, int val)
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

int node_data_print(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {        
        count++;
        temp = temp->next;
    }
    return count;
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
    int first_count = node_data_print(head);
    int second_count = node_data_print(head1);
    if(first_count == second_count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    
    return 0;
}

