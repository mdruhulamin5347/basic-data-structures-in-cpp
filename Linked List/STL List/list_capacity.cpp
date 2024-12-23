

//  STL List capacity function



#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int>l={1,2,3,4,5};
    cout << l.size() << endl;           // use size function


    // l.clear();                       // use clear function
    // cout << l.size() << endl;

    
    // if(l.empty()){                   // use empty function
    //     cout << "yes" << endl;
    // }
    // else 
    // {
    //     cout << "no" << endl;
    // }


    l.resize(10,3);                     // use resize function
    for(int val: l)
    {
        cout<< val << " " ;
    }

    return 0;
}