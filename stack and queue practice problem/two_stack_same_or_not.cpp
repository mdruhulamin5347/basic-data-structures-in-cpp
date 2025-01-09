

// problem number 1

// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL stack to solve this problem.

// Sample Input
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
// Sample Output
// YES
// 5
// 10 20 30 40 50
// 4
// 10 20 30 40
// NO
// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10
// NO


#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
    vector<int>v;
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

int main(){
    myStack st;
    myStack st2;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        st.push(val);
    }
    int m;
    cin >> m;
    while(m--){
        int val;
        cin >> val;
        st2.push(val);
    }
    
    if(st.size() != st2.size()){
        cout << "NO";
        return 0;
    }
    bool flag=true;
    while(!st.empty()){
        if(st.top() != st2.top()){
            flag = false;
            break;
        }
        st.pop();
        st2.pop();
    }  
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
