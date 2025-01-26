#include <bits/stdc++.h>
using namespace std;

int zero_is_hero(int n){
    int count = 0;
    int pow_of_5=5;
    while(n/pow_of_5>0){
        count += n/pow_of_5;
        pow_of_5 *= 5;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    int ans = zero_is_hero(n);
    cout << ans ;    
    return 0;
}