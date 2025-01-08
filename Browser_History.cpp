

// problem number 3


// Problem Statement

// You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

// visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
// next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
// prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
// One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.

// Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

// Input Format

// First line will contain the values of the doubly linked list, and will terminate with the string "end".
// Second line will contain Q.
// Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!
// Constraints

// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 1 <= Q <= 1000;
// 1 <= |Address| <= 100; Here |Address| is the length of the string address.
// Output Format

// For each query output as asked.



#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) 
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void browser_history(Node* &head2, string value) 
{
    if (value == "next") 
    {
        if (head2->next == NULL) 
        {
            cout << "Not Available" << endl;
        } 
        else 
        {
            head2 = head2->next;
            cout << head2->val << endl;
        }
    } 
    else if (value == "prev") 
    {
        if (head2->prev == NULL) 
        {
            cout << "Not Available" << endl;
        } 
        else 
        {
            head2 = head2->prev;
            cout << head2->val << endl;
        }
    } 
    else 
    {      
        stringstream word(value);
        string search, name;
        word >> search >> name;

        if (search == "visit") 
        {
            Node* temp = head2;
            bool found = false;
            while (temp != NULL) 
            {
                if (temp->val == name) 
                {
                    head2 = temp;
                    cout << head2->val << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }

            if (!found) 
            {
                cout << "Not Available" << endl;
            }
        }
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true) 
    {
        string val;
        cin >> val;
        if (val == "end") 
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    cin.ignore();

    Node* head2 = head;
    string value;

    while (q--) 
    {
        getline(cin, value);
        browser_history(head2, value);
    }

    return 0;
}

