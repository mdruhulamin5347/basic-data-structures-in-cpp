



//                topci Quadratic complexity



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;                     // O(1): Input operation
    cin >> n;                  // O(1): Input operation

    int a[n][n];               // O(1): Array declaration

    for (int i = 0; i < n; i++) {         // O(n) Outer loop runs n times
        for (int j = 0; j < n; j++) {     // O(n) Inner loop runs n times for each i
            cin >> a[i][j];               // O(1): Input for each iteration
        }
    }

    return 0;                  // O(1): Return statement
}                              // final Quadratic time complexity: O(n*n)