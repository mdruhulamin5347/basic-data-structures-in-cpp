

// STL set


#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>bst;
    int val;
    while(cin >> val){
        bst.insert(val);
    }
    for(auto it=bst.begin(); it!=bst.end();it++){
        cout << *it << " ";
    }
    return 0;
}