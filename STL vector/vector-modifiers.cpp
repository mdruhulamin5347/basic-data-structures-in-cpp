

// Vector Modifiers in C++

// Name            : v= or v.assign()
// Details         : Assign another vector.
// Time Complexity : O(N) if sizes are different, O(1) otherwise.

// Name            : v.push_back()
// Details         : Add an element to the end.
// Time Complexity : O(1)

// Name            : v.pop_back()
// Details         : Remove the last element.
// Time Complexity : O(1)

// Name            : v.insert()
// Details         : Insert elements at a specific position.
// Time Complexity : O(N+K); where K is the number of elements to be inserted.

// Name            : v.erase()
// Details         : Delete elements from a specific position.
// Time Complexity : O(N+K); where K is the number of elements to be deleted.

// Name            : replace(v.begin(), v.end(), value, replace_value)
// Details         : Replace all occurrences of 'value' with 'replace_value' in the vector.
// Time Complexity : O(N)

// Name            : find(v.begin(), v.end(), V)
// Details         : Find the value 'V' in the vector.
// Time Complexity : O(N)




#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int>v = {3,4,5};       
    // vector<int>v2(3);
    // v2=v;                            //Assign another vector.
    // for(int i=0;i<3;i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // vector<int>v = {3,4,7};          // push back and pop back function
    // v.pop_back();
    // v.push_back(5);
    // for(int x : v)
    // {
    //     cout << x << " ";
    // }


    // vector<int>v={3,4,5};
    // vector<int>v1={1,2};                      // insert function
    // v.insert(v.begin()+1,v1.begin(),v1.end());
    // for(int x : v)
    // {
    //     cout << x << " ";
    // }j


    // vector<int>v={2,3,4,5};           // erase function
    // v.erase(v.begin()+2,v.end()-1);
    // for(int x : v)
    // {
    //     cout << x << " ";
    // }



    // vector<int>v={2,3,4,5,3,2,4,2,4,2};
    // replace(v.begin(),v.end(),2,93);      // replace function
    // for(int x : v)
    // {
    //     cout << x << " ";
    // }   

    vector<int>v={2,3,4,5,3,2,4,2,4,2};
    auto it = find(v.begin(),v.end(),64);       // find function
    if(it == v.end())
    {
        cout << "not found" <<endl;
    }
    else
    {
        cout<< "found" << endl;
    }


    return 0;
}