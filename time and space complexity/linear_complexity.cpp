
//  asymptotic notations
//       -  omega notation  -  best case
//       -  theta notation  -  average case
//       -  big O notation  -  worst case



// rule to calculate time complexity 
//   - always take the worst case
//   - ignore the constant



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;        // O(1): Variable declaration is constant time
    n = 5;        // O(1): Assignment of a constant value is constant time
    cout << n;    // O(1): Printing a single value is constant time
    return 0;     // O(1): Return statement is constant time
    // **Overall Time Complexity**: O(1)
    // The code performs constant-time operations, so the overall complexity is O(1).
}





#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;                        // O(1): Variable declaration is constant time  
    cin >> n;                     // O(1): Input for an integer is constant time  
    int a[n];                     // O(1): Array declaration (size depends on n, but the operation itself is constant)
    
    // Loop iterates n times (O(n))
    for(int i = 0; i < n; i++) {   // O(n): Loop runs n times
        cin >> a[i];               // O(1): Reading input for each array element
    }
    return 0;                      // O(1): Return statement is constant time  
    // **Overall Time Complexity**: O(1) + O(1) + O(1) + O(n) + O(1) = O(n)
    // The loop dominates the complexity, so the overall complexity is O(n).
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    // Code for First Example
    int n;                              // O(1): Reading a single integer is constant time
    cin >> n;                           // O(1): Reading the input integer
    
    int a[n];                           // O(1): Array declaration
    
    // First loop - Iterates n/2 times (i.e., O(n/2) which simplifies to O(n))
    for(int i = 0; i < n / 2; i++) {     // O(n/2) simplifies to O(n)
        cin >> a[i];                    // O(1): Reading input for each element
    }
    
    return 0;                            // O(1): Return statement is constant time
    
    // **Time Complexity for this Code**: O(1) + O(1) + O(1) + O(n) + O(1) = O(n)
    // Final time complexity: **O(n)**
}







#include <bits/stdc++.h>
using namespace std;

int main() {
    // Code for Second Example
    int n;                              // O(1): Reading a single integer is constant time
    cin >> n;                           // O(1): Reading the input integer
    
    int a[n];                           // O(1): Array declaration
    
    // Loop iterates n/2 times (simplifies to O(n))
    for(int i = 0; i < n; i += 2) {     // O(n): Loop runs for half of n elements
        cin >> a[i];                    // O(1): Input for each element
    }
    
    return 0;                            // O(1): Constant time return
    
    // **Time Complexity for this Code**: O(1) + O(1) + O(1) + O(n) = O(n)
    // Final time complexity: **O(n)**
}









#include <bits/stdc++.h>
using namespace std;

int main() {
    // Code for Third Example
    int n;                              // O(1)
    cin >> n;                           // O(1)
    
    int a[n];                           // O(1)
    
    // First loop (O(n)) - Iterating through the entire array
    for(int i = 0; i < n; i++) {        // O(n)
        cin >> a[i];                    // O(1)
    }
    
    // Second loop (O(n)) - Printing the entire array
    for(int i = 0; i < n; i++) {        // O(n)
        cout << a[i];                   // O(1)
    }
    
    return 0;                           // O(1)
    
    // **Time Complexity for this Code**: O(1) + O(1) + O(1) + O(n) + O(n) = O(2n) which simplifies to O(n)
    // Final time complexity: **O(n)**
}

