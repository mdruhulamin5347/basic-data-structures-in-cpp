
// problem number 5

// Problem Statement

// You will be given a list  of size . The list will contain data of some students where each student have ,  and . Then you will be given  queries, for each query there will be some commands. Commands are given below -

//   -> Insert  into the list where  is the data of a student which contain ,  and . Then print the current student's data who has the maximum  from the list.
//  -> Print the current student's data who has the maximum  from the list.
//  -> Delete the student who has the maximum  from the list and print the current student who has the maximum  from the list.
// Note: If there are multiple students with same  then we will select whose  is smaller. If the list is empty and you can't print anything then you should print "Empty".

// Input Format

// First line will contain .
// Next  lines will contain ,  and  of student .
// Third line will contain .
// Next  lines will contain the commands.
// Constraints

// ,  will contain only English lowercase letters and will not contain any spaces.
// Marks
// Output Format

// For each command, print as asked from the list.

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int mark;
        Student(string name, int roll, int mark){
            this->name = name;
            this->roll = roll;
            this->mark = mark;
        }
};

class cmp{
    public:
        bool operator()(Student l, Student r){
            return l.mark == r.mark ? l.roll > r.roll : l.mark < r.mark;
        }
};

int main(){    
    priority_queue<Student,vector<Student>,cmp>pq;

    int n,q;
    cin >> n;
    while(n--){
        string n;
        int r,m;
        cin >> n >> r >> m;
        Student obj(n,r,m);
        pq.push(obj);
    }
    
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(x==0){
            string present_s;
            int present_r,present_m;
            cin >> present_s >> present_r >> present_m;
            Student present_obj(present_s,present_r,present_m);
            pq.push(present_obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if(x==1){            
            if(pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if(x==2){
            if(!pq.empty()){
                pq.pop();
                if(pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}