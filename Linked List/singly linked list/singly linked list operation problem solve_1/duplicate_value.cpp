
// problem 2


// Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.


// Sample Input
// 5 4 8 6 2 1 -1
// 2 4 5 6 7 4 -1
// Sample Output
// NO
// YES


#include <bits/stdc++.h>
using namespace std;
int freq[105] = {0};
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
        freq[head->val] = 1;
        return;
    }    
    tail->next = newNode;    
    tail = newNode;
    freq[tail->val]++;
}
void node_data_print(Node* head)
{
    Node* temp = head;
    int flag = 0;
    while(temp != NULL)
    {        
        if(freq[temp->val] > 1)
        {
            flag = 1;
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