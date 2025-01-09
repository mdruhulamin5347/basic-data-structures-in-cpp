

// problem number 4


// Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

// Sample Input
// 5
// 10 20 30 40 50
// Sample Output
// 50 40 30 20 10


#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
