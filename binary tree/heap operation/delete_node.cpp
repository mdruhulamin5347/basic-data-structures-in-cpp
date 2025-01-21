

// delete node in heap


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

void delete_node(vector<int> &v){
    v[0]=v.back();
    v.pop_back(); 
    int parent_idx = 0;
    while(parent_idx < v.size()-1){
        int left_child_idx = (parent_idx * 2)+1;
        int right_child_idx = (parent_idx * 2)+2;
        if(v[parent_idx] < v[left_child_idx] && v[left_child_idx] > v[right_child_idx]){
            swap(v[parent_idx],v[left_child_idx]);
            parent_idx=left_child_idx;
        }
        else if(v[parent_idx] < v[right_child_idx] && v[right_child_idx] > v[left_child_idx]){
            swap(v[parent_idx],v[right_child_idx]);
            parent_idx=right_child_idx;
        }
        else{
            break;
        }
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

    delete_node(v);
    print_heap(v);

    return 0;
}