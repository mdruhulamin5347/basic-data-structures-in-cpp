

//           Vector Input and Output


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n; i++)
    { 
        cin >> v[i];               // input
    }

    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";       // output
    }

    return 0;
}