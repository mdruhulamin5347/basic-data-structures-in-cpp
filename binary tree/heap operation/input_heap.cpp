


// input node in heap


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


void print_heap(vector<int> v){
    for(int value : v)
        cout << value << " ";
}

int main(){
    vector<int>v;
    int n;
    cin >> n;    
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        insert(v,val);
    }  

    print_heap(v);

    return 0;
}