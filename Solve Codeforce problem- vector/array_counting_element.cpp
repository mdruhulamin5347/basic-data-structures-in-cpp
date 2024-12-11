
// You are given an array a
//  of n
//  integers, count the number of element ai
//  in the array such that ai+1
//  is also exists in the array a
//  .

// If there're duplicates in a
// , count them separately.

// Input
// The first line contains an integer n(1≤n≤103)
//  the number of elements in the array a

// The second line contains n
//  integers ai(0≤Xi≤103)
//  the elements of the array a
// .

// Output
// output the number of elements as descriped above.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i=0; i<n; i++)
    {
        int num = v[i] + 1;
        auto it = find(v.begin(),v.end(),num);
        if(it != v.end())
        {
            count++;
        }
    }
    cout << count ;
    return 0;
}