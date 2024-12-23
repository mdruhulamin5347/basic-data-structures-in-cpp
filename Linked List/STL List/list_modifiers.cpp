


// STL List Modifiers function



#include <bits/stdc++.h>
using namespace std;

int main(){
    
    list<int>l={1,2,3,4,5};

    // list<int>l2;
    // l2=l;                           // Assign another list using "=" operator
    // l2.assign(l.begin(),l.end());   // Assign another list using "assing" function.


    l.push_back(20);                   // insert at tail function
    l.push_front(20);                  // insert at head function

    l.pop_back();                      // delete at tail function
    l.pop_front();                     // delete at head function

    l.insert(next(l.begin(),2),93);    // Insert elements at a specific position.

    l.erase(next(l.begin(),3),next(l.begin(),5));  // Delete elements from a specific position.

    replace(l.begin(),l.end(),2,93);               // Replace all the value with replace_value. Not under a list STL.
    for(int val: l)
    {
        cout << val << " ";
    }
    cout << endl;
    

    auto it = find(l.begin(),l.end(),93);          //Find the value V. Not under a list STL.
    if(it != l.end())
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
