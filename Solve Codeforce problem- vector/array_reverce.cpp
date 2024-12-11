

// Given a number N and an array A of N numbers. Print the array in a reversed order.



// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers (0 ≤ Ai ≤ 109).

// Output
// Print the array in a reversed order.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    // for(int i=0,j=n-1; i<j; i++,j--)    // custom reverse 
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }
    reverse(v.begin(),v.end());      // built in function
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}