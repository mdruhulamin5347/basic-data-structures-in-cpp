


// STL List operations function



#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int>l={10,50,20,20,40,50,30,40};

    l.remove(20);                       // Remove the value V from the list.

    l.sort();                           // Sort the list in ascending order.

    l.sort(greater<int>());             // Sort the list in descending order

    l.unique();                         // Deletes the duplicate values from the list. You must sort the list first.

    l.reverse();                        // Reverse the list.

    for(int val: l)
    {
        cout << val << " ";
    }
    return 0;
}