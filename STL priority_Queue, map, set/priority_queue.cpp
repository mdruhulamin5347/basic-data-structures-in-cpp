

// STL priority queue 


#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    int val;
    while(cin >> val){
        pq.push(val);
    }
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}