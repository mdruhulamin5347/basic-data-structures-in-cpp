

//      STL   list constructors


#include <bits/stdc++.h>
using namespace std;

int main(){

    // list<int> l;  
    // cout << l.size() << endl;          // type 1


    // list<int> l(10);                   // type 2
    // cout << l.size() << endl;


    // list<int>l(10,5);                  // type 3
    // for(int val : l)
    // {
    //     cout << val << " " ;
    // }


    // list<int>l(5,3);                   // type 4 
    // list<int>l2(l);
    // for(int val : l2)
    // {
    //     cout << val << " " ;
    // }


    // int a[5]={1,2,3,4,5};              // type 5
    // list<int>l(a,a+5);
    // for(int val : l)
    // {
    //     cout << val << " " ;
    // }


    vector<int> v={1,2,3,4,5,6,7,8,9};    // type 6
    list<int>l(v.begin(),v.end());
    for(int val : l)
    {
        cout << val << " " ;
    }
    
    return 0;
}