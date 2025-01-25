
// solve the problem using map STL


#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>mp;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        mp[word]++;
    }
    int mx = 0;
    string max_word;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second > mx)
        {
            mx = it->second;
            max_word = it->first;
        }            
    }
    cout << max_word << " " << mx << endl;
    return 0;
}