


// Given a string S. Determine how many times does each letter occurred in S.

// Input
// Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

// Output
// For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

// Note: you must print letters in ascending order.





#include <bits/stdc++.h>
using namespace std;
vector<int>freq(30);
int main(){
    string s;  
    cin >> s;
    for(char ch : s)
    {       
        int index = ch - 'a';
        freq[index]++; 
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i] > 0)
        {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }        
    }
    return 0;
}