

// STL map


#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    m["ruhul"]=50;
    m["arafat"]=30;
    m["amin"]=10;
    cout << m["arafat"] << endl;
    for(auto it=m.begin(); it!=m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}