


// using doubly linked list


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

class myStack{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;
    void push(int val){
        Node* newNode = new Node(val);
        count++;
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

    void pop(){      
        count--;  
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL; 
    }
    int top()
    {
        return tail->val;
    }
    int size(){
        return count;
    }
    bool empty(){
        return head==NULL;
    }

};

int main(){
    myStack st;
    int val;
    while(cin >> val)
    {
        st.push(val);
    }   

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}