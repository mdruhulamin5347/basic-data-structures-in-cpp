



// Problem Statement

// You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".

// Input Format

// First line will contain T, the number of test cases.
// The first line of each test case will contain N.
// The second line of each test case will contain the array A.
// Constraints

// 1 <= T <= 1000
// 1 <= N <= 1000
// 0 <= A[i] <= 1000; Where 0 <= i < N
// Output Format

// Output "YES" or "NO" without the quotation marks according to the problem statement.




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     for(int i=1; i<=t; i++)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         int flag = 1;
//         for(int j=0; j<n; j++)
//         {
//             cin >> a[j];
//         }
//         for(int j=0; j<n; j++)
//         {
//             if(a[j] > a[j+1])
//             {
//                 flag = 0;       
//                 break;                
//             }
//         }
//         if(flag==1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j=0; j<t; j++)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int flag = 1;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        for(int i=0; i<n; i++)
        {
            if(a[i] != b[i])
            {
                flag = 0;
            }
        }
        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }      
    }
    return 0;
}