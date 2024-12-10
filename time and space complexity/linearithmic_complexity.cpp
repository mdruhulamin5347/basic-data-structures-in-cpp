
//               Linearithmic complexity

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;                   // O(1): Input operation
    cin >> n >> m;              // O(1): Input operation

    for (int i = 1; i <= n; i++) {         // Outer loop runs n times (O(n))
        for (int j = 1; j <= m; j *= 2) {  // Inner loop runs log(m) times (O(log m))
            cout << "Md.Ruhul Amin" << endl; // O(1): Print operation
        }
    }

    return 0;                   // O(1): Return statement
}                               // final time complexity is: O(n * log n)