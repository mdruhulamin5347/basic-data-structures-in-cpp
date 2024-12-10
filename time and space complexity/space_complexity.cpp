

//       topic space complexity


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;                       // O(1) time | O(1) space
    cin >> n;                    // O(1) time | O(1) space                
    for(int i=0; i<n; i++) {     // O(n) time | O(1) space
        cout << "MD.Ruhul Amin" << endl;   
    }
    return 0;                    // O(1) time | O(1) space
}                                // final space compexity is: O(1)






#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;                       // O(1) time | O(1) space
    cin >> n;                    // O(1) time | O(1) space
    int a[n];                    // O(1) time | O(n) space (array of size n)
    for(int i=0; i<n; i++) {     // O(n) time | O(1) space
        cin >> a[i];             // O(1) per iteration -> O(n) total time
    }
    return 0;                    // O(1) time | O(1) space
}                                // final space compexity is: O(n)