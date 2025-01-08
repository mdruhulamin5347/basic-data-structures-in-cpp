

// implemantation queue using sigly linked list


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

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;
    void push(int val){
        count++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop(){
        count--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        
    }
    int front(){
        return head->val;
    }
    int size(){
        return count;
    }
    bool empty(){
        return head==NULL;
    }
    int back(){
        return tail->val;
    }
};
int main(){
    myQueue q;
    int val;
    while(cin >> val){
        q.push(val);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}