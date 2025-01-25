

// solve the problem using priority queue


#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int mark;
        Student(string name,int roll,int mark){
            this->name = name;
            this->roll = roll;
            this->mark = mark;
        }
};

class cmp{
    public:
        bool operator()(Student l,Student r){
            return l.mark != r.mark ? l.mark < r.mark:l.roll > r.roll;
        }
};

int main(){
    priority_queue<Student,vector<Student>,cmp>pq;
    int t;
    cin >> t;
    while(t--){  
        string n;
        int r,m;      
        cin >> n >> r >> m;
        Student obj(n,r,m);
        pq.push(obj);
    }

    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        pq.pop();
    }
    return 0;
}