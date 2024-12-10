

// Vector Iterator in C++

// Name            : v.begin()
// Details         : Pointer to the first element of the vector.
// Time Complexity : O(1)

// Name            : v.end()
// Details         : Pointer to the last element of the vector.
// Time Complexity : O(1)



#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    for(auto it =v.begin(); it<v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}