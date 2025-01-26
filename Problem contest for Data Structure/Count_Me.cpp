
// problem number 3

// Problem Statement

// You will be given a sentence  that contains words with lowercase and uppercase English alphabets separated by spaces. You need to determine which word occurs the most times and also provide the count of that word.

// Note: If there are multiple words that occur the most, print the first word that reaches the maximum count before others.

// Input Format

// First line will contain , the number of test cases.
// Each test case will contain the sentence .
// Constraints

// , Here  means the length of .
// Output Format

// Output the word and the count that occurs the most.

#include <bits/stdc++.h>
using namespace std;



int main(){    
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){        
        getline(cin,s);
        stringstream ss(s);

        map<string,int>m;
        string word;

        int mx = 0;
        string mx_str;
        while(ss >> word){
            m[word]++;
            if(m[word] > mx){
                mx = m[word];
                mx_str = word;
            }            
        }
        cout << mx_str << " " << mx << endl;
    }
    return 0;
}