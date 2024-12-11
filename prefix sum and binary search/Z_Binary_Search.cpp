


// Given 2 numbers N
//  and Q
// , array A of N numbers and Q queries each one contains a number X
// .

// For each query print a single line that contains "found" if the number X
//  exists in array A
//  otherwise, print "not found".

// Input
// First line contains two numbers N
// , Q
//  (1≤N,Q≤105)
// .

// Second line contains N
//  numbers (1≤Ai≤109)
// .

// Next Q
//  lines contains X
//  (1≤X≤109)
// .

// Output
// Print the answer for each query in a single line.



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    while(q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l = 0; 
        int r = n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if(a[mid] < x)
            {
                l = mid + 1;
            }
            else 
            {
                r = mid - 1;
            }
        }
        if(flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}












// demo binary search example


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,q;
//     cin >> n >> q;
//     int a[n];
//     for(int i=0;i<n; i++)
//     {
//         cin >> a[i];
//     }
//     int flag = 0;
//     int l = 0;
//     int r = n-1;
//     while(l<=r)
//     {
//         int mid = (l+r)/2;
//         if(a[mid]==q)
//         {
//             flag = 1;
//             break;
//         }
//         else if(a[mid] > q)
//         {
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     if(flag==1)
//     {
//         cout << "found";
//     }
//     else
//     {
//         cout << "not found";
//     }
//     return 0;
// }