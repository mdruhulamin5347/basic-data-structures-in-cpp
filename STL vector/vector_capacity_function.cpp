

// Vector Capacity in C++

// Name            : v.size()
// Details         : Returns the size of the vector.
// Time Complexity : O(1)

// Name            : v.max_size()
// Details         : Returns the maximum size that the vector can hold.
// Time Complexity : O(1)

// Name            : v.capacity()
// Details         : Returns the current available capacity of the vector.
// Time Complexity : O(1)

// Name            : v.clear()
// Details         : Clears the vector elements. Does not delete the memory, only clears the values.
// Time Complexity : O(N)

// Name            : v.empty()
// Details         : Returns true/false if the vector is empty or not.
// Time Complexity : O(1)

// Name            : v.resize()
// Details         : Changes the size of the vector.
// Time Complexity : O(K); where K is the difference between the new size and the current size.





#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(2);
    cout << v.size() << endl;
    cout << v.max_size() << endl;
    cout << v.capacity() << endl;
    // v.clear();
    // is_empty = v.empty();
    v.resize(5,30);
    for(int i=0;i<5;i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

