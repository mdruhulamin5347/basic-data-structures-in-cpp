

// problem number 2

// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

// Sample Input
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
// Sample Output
// NO
// 5
// 10 20 30 40 50
// 4
// 10 20 30 40
// NO
// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10
// YES



#include <bits/stdc++.h>
using namespace std;


int main(){
    stack<int>st;
    queue<int>q;

    int n,m;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        st.push(val);
    }
    cin>>m;
    while(m--){
        int val;
        cin >> val;
        q.push(val);
    }

    if(st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

    bool flag = true;
    while(!st.empty()){
        if(st.top() != q.front())
        {
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
