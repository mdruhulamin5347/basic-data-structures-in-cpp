// Vector Initialization in C++

// Name            : vector<type> v;
// Details         : Construct a vector with 0 elements.
// Time Complexity : O(1)

// Name            : vector<type> v(N);
// Details         : Construct a vector with N elements.
// Time Complexity : O(N)

// Name            : vector<type> v(N, V);
// Details         : Construct a vector with N elements, and each element will have the value V.
// Time Complexity : O(N)

// Name            : vector<type> v(v2);
// Details         : Construct a vector by copying another vector v2.
// Time Complexity : O(N)

// Name            : vector<type> v(A, A + N);
// Details         : Construct a vector by copying all elements from an array A of size N.
// Time Complexity : O(N)



#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int>v;           // type number `1

    // vector<int>v(5);        // type number 2

    // vector<int>v(5,93);        // type number 3
    // for(int i=0;i<5;i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int>v(5,3);            
    // vector<int>v2(v);             // type number 4
    // for(int i=0;i<5;i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // int a[5]={3,5,6,7,4};
    // vector<int>v(a,a+5);             // type number 5
    // for(int i=0;i<5;i++)
    // {
    //     cout << v[i] << " ";
    // }



    vector<int>v={3,5,6,7,4,6};           // type number 5
    for(int i=0;i<6;i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}