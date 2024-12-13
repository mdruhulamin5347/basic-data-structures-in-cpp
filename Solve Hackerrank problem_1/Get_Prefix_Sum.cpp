



// Problem Statement

// You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.

// Input Format

// First line will contain N.
// Next line of contain the array A.
// Constraints

// 1 <= N <= 10^5
// 1 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// Output the prefix sum array in reverse order.



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    long long pre[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    pre[0]=a[0];
    for(int i=1;i<n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    reverse(pre,pre+n);
    for(int i=0; i<n; i++)
    {
        cout << pre[i] << " " ;
    }

    return 0;
}