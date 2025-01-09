
// problem number 3


// Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.


// Sample Input
// 5
// 10 20 30 40 50
// Sample Output
// 10 20 30 40 50



#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        st.push(val);
    }

    stack<int>st2;    
    while(!st.empty()){
        st2.push(st.top());        
        st.pop();
    }
    st = st2;
     while(!st.empty()){        
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}

