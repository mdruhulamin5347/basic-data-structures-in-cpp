

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int f_a=0,f_c=0,f_g=0,f_t=0;
    int a=1,c=1,g=1,t=1;
    for(int i=0;i<s.size(); i++){
        if(s[i] == 'A' && s[i+1]=='A'){            
            a++;            
        }
        else{
            f_a=max(a,f_a);
            a=1;
        }
        if(s[i] == 'C' && s[i+1]=='C'){            
            c++;            
        }
        else{
            f_c=max(c,f_c);
            c=1;
        }
        if(s[i] == 'G' && s[i+1]=='G'){            
            g++;            
        }
        else{
            f_g=max(g,f_g);
            g=1;
        }
        if(s[i] == 'T' && s[i+1]=='T'){            
            t++;            
        }
        else{
            f_t=max(t,f_t);
            t=1;
        }
    }
    cout << max({f_a,f_c,f_g,f_t});
    return 0;
}