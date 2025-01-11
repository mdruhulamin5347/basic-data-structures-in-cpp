

// problem number 2

// Problem Statement

// There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You cannot use any  here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.

// Input Format

// First line will contain  and .
// Second line will contain stack  with  values.
// Third line will contain queue  with  values.
// Constraints

// Output Format

// Output YES if they were same, otherwise NO.



#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
    vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }

};
class MyQueue{
    public:
    list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int back(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};
int main(){
    MyStack st;
    MyQueue q;
    int n,m,val;
    cin >> n >> m;
    while(n--){        
        cin >> val;
        st.push(val);
    }
    while(m--){        
        cin >> val;
        q.push(val);
    }
    if(st.size() != q.size()){
        cout << "NO";
        return 0;
    }
    bool flag = true;
    while(!st.empty()){
        if(st.top() != q.front()){
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}