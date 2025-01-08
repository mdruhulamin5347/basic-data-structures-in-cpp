

// implementation stack use STL 


#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;

    int val;
    while(cin >> val)
    {
        s.push(val);
    }
    while(!s.empty())
    {
        cout << s.top() << " " ;
        s.pop();
    }
    return 0;
}