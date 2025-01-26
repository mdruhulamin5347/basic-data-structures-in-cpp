

// problem 1

// Problem Statement

// You will be given a list  of size . You need to sort those values in ascending order and also you need to remove any duplicate values from the list and print the final outcome.

// Input Format

// First line will contain , the number of test cases.
// The first line of every test case will contain .
// The second line of every test case will contain the list  of size .
// Constraints

// , Here 
// Output Format

// Output the final list.


#include <bits/stdc++.h>
using namespace std;
int main(){    
    int t;
    cin >> t;
    while(t--){
        set<int>bst;
        int n,val;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> val;
            bst.insert(val);            
        }
        for(auto it=bst.begin(); it!=bst.end();it++){
            cout << *it << " ";
        }
        cout << endl;
        
    }
    return 0;
}