
//                topic sqrt complexity

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;                               // O(1): Input operation
    cin >> n;                            // O(1): Input operation
    int a[n];                            // O(1): Array declaration

    for (int i = 0; i < sqrt(n); i++) {  // Loop runs O(√n) times
        cin >> a[i];                     // O(1): Input for each iteration
    }

    return 0;                            // O(1): Return statement
}                                        // final complexity is: O(√n)


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;                               // O(1): Input operation
    cin >> n;                            // O(1): Input operation
    int a[n];                            // O(1): Array declaration

    for (int i = 0; i * i < n; i++) {    // Loop runs O(√n) times
        cin >> a[i];                     // O(1): Input for each iteration
    }

    return 0;                            // O(1): Return statement
}                                        // final complexity is: O(√n)