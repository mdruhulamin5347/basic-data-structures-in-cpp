

// STL priority queue 


#include <bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int>pq; // descending order
    priority_queue<int,vector<int>,greater<int>>pq;  // ascending order
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