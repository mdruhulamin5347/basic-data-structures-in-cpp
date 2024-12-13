

// Problem Statement

// You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Constraints

// 1 <= N <= 100000
// 0 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// Output "YES" or "NO" without the quotation marks according to the problem statement.



#include <bits/stdc++.h>
using namespace std;
vector<int>freq(10000000);
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
        if(freq[v[i]] > 1)
        {
            flag = 1;            
        }        
    }

    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}