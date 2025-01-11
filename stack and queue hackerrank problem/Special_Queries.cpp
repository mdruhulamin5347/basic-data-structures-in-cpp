

// problem number 4

// Problem Statement

// You will be given  queries. In each query you will get a command. The command is of two types -

// You will be given  and  of a person who stood in a line of a ticket counter.
// You will be given only  which means the person in front of the line got the ticket and will be removed from the line. You need to print the name of that person who got that ticket. If there are no one in the line, print .
// Note: There can be multiple person in the line with same name. You need to solve it using STL Stack or Queue only.

// Input Format

// First line will contain .
// Next  lines will contain the commands.
// Constraints

// . Here |Name| means the length of the string and it will not contain any space. The string will contain only small English alphabets.
// Output Format

// For each time someone get out of the line, print his/her name. Print a new line after that.


#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<string>que;
    string s;
    int q,command;   
    cin >> q;
    while(q--){        
        cin >> command;
        if(command == 0){
            cin >> s;
            que.push(s);            
        }
        else{
            if(que.empty()){
                cout << "Invalid" << endl;                
            }
            else{
                cout << que.front() << endl;
                que.pop();
            }            
        }        
    }
    return 0;
}