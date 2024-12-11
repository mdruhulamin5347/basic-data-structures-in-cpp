

// problem  Equilibrium Index

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int pre[n];
    pre[0] = a[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    for(int i=0; i<n; i++)
    {
        int leftSum = i==0?  0 :  pre[i-1];
        
        int rightSum = pre[n-1] - pre[i];
        if(leftSum == rightSum)
        {
            cout << i;
            break;
        }       
        
    }
    return 0;
} 