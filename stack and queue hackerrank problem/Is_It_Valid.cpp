

// problem numbeer 3

// Problem Statement

// Given a string  containing just the characters  and , determine if the input string is valid.

// An input string is valid if the string is empty after doing some operatios. The available operations are:

//  can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
//  can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
// Note: You need to solve it using STL Stack or Queue only.

// Input Format

// First line will contain , the number of test cases.
// Next  lines will contain the string .
// Constraints

// . Here  means the length of the string.
// Output Format

// Output YES if the string is valid, otherwise NO.


#include <bits/stdc++.h>
using namespace std;

int main(){    
    string s;
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        stack<char> st;
        for(char c : s){
            if(c=='0'){
                if(st.empty() || st.top()=='0'){
                    st.push(c);
                }
                else{
                    st.pop();
                }
            }
          
            else{
                if(st.empty() || st.top()=='1'){
                    st.push(c);
                }
                else{
                    st.pop();
                }               
            }
  
        }
        if(st.empty())
            cout<<"YES" << endl;
        else 
            cout<<"NO" << endl;
    }
    return 0;
}