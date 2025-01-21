
// insert node in heap


#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v,int val){
    v.push_back(val);
    int current_idx = v.size()-1;
    while(current_idx != 0){
        int parent_idx = (current_idx-1)/2;
        if(v[parent_idx] < v[current_idx])
            swap(v[parent_idx],v[current_idx]);            
        else
            break;      
        current_idx=parent_idx;
    }    
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int val;
    cin >> val;
    
    // call insert function
    insert(v,val);
    
    // print the vector
    for(int num : v)
        cout << num << " ";
    return 0;
}