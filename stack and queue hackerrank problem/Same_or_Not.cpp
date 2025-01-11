

// problem number 1

// Problem Statement

// There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You need to solve it using  Stack and Queue only.

// Input Format

// First line will contain  and .
// Second line will contain stack  with  values.
// Third line will contain queue  with  values.
// Constraints

// Output Format

// Output YES if they were same, otherwise NO.



#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;
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