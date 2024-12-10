

// logarithmic complexity


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;         // O(1): Input operation is constant time
    int a[n];         // O(1): Array declaration is constant time
    
    for (int i = 1; i < n; i *= 2) {  // O(log n): Loop doubles i at each step
        cin >> a[i];                  // O(1): Reading input for each loop iteration
    }
    return 0;          // O(1): Return statement is constant time

                       // final complexity is: O(log n)
}



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;          // O(1): Input operation is constant time
    int a[n];          // O(1): Array declaration is constant time
    
    for (int i = 0; i < n; i /= 3) {  // O(log n): Incorrect complexity due to i /= 3
        cin >> a[i];                  // O(1): Reading input for each loop iteration
    }
    return 0;          // O(1): Return statement is constant time

                      //  final complexity is: O(log n) 
}