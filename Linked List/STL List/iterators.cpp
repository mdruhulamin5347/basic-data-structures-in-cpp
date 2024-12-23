

// STL List Iterators


#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,4,5,6,7,8,9};

    cout << *l.begin() << endl;             // Pointer to the first element.
    cout << *l.end()   << endl;             // Pointer to the last element.
    
    for(int i=*l.begin(); i<=*l.end(); i++)
    {
        cout << i << " ";
    }
    return 0;
}