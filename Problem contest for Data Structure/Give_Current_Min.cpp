

// problem number 4

// Problem Statement

// You will be given a list  of size . Then you will be given  queries, for each query there will be some commands. Commands are given below -

//   -> Insert  into the list. Then print the current minimum value from the list.
//  -> Print the current minimum value from the list.
//  -> Delete the current minimum value from the list and print the minimum value from the list after deletion.
// Note: If the list is empty and you can't print anything then you should print "Empty".

// Input Format

// First line will contain .
// Second line will contain the list  of size .
// Third line will contain .
// Next  lines will contain the commands.
// Constraints

//  ; Here  means the values of the list .
// Output Format

// For each command, print as asked from the list.


#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    int n,q;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        pq.push(val);
    }

    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(x==0){
            int present;
            cin >> present;
            pq.push(present);
            cout << pq.top() << endl;
        }
        else if(x==1){
            if(pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if(x==2){
            if(!pq.empty()) {
                pq.pop();
                if(pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }        
    }
    return 0;
}
