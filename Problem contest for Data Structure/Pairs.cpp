
// problem number 2


// Problem Statement

// You will be given a list  of type pairs. Each pair will contain one string  and one unique integer . The string will contain only English lowercase alphabets and no spaces.

// You need to sort the pairs according to the string values in ascending order. If there are multiple pairs with the same string, you need to sort them according to the integer value in descending order.

// Input Format

// First line will contain , the size of the list .
// Next  lines will contain pairs of string  and integer .
// Constraints

// Output Format

// Output the final list after sorting according to the question.


#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b) {
    if(a.first == b.first) 
        return a.second > b.second;    
    return a.first < b.first;
}

int main(){
    vector<pair<string,int>>v;
    int n,i;
    string s;
    cin >> n;
    while(n--){
        cin >> s >> i;
        v.push_back(make_pair(s,i));
    }

    sort(v.begin(),v.end(),cmp);

    for (auto val : v) {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}