


//         problem number 1

// Given two arrays A
//  and B
//  of size N
// . Print a new array C
//  that holds the concatenation of array B
//  followed by array A
// .

// Note: Solve this problem using function.

// Input
// First line will contain a number N
//  (1≤N≤103)
// .

// Second line will contain N
//  numbers (1≤Ai≤105)
//  array A
//  elements.

// Third line will contain N
//  numbers (1≤Bi≤105)
//  array B
//  elements.

// Output
// Print array C
//  elements separated by space.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c;
    for(int i=0; i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n;i++)
    {
        cin >> b[i];
        
    }
    for(int x : b)
    {
        c.push_back(x);
    }
    for(int y : a)
    {
        c.push_back(y);
    }
    for(auto it = c.begin(); it < c.end(); it++)
    {
        cout << *it << " ";
    }     


    return 0;
}