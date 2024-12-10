



// Vector Element Access in C++

// Name            : v[i]
// Details         : Access the ith element.
// Time Complexity : O(1)

// Name            : v.at(i)
// Details         : Access the ith element with bounds checking.
// Time Complexity : O(1)

// Name            : v.back()
// Details         : Access the last element.
// Time Complexity : O(1)

// Name            : v.front()
// Details         : Access the first element.
// Time Complexity : O(1)




#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    cout << v[2]<<endl;
    cout << v.at(1) <<endl;
    cout << v.back() <<endl;
    cout << v.front() << endl;

    return 0;
}