

// STL List Element Access


#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int>l={1,2,3,4,5};
    cout << l.front() << endl;         // Access the tail element.
    cout << l.back()  << endl;         // Access the head element.

    cout << *next(l.begin(),2) << endl;   // Access the ith element
    return 0;
}