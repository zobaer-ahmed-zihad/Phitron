#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;

    Node(int val){ // create a constructor
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(57);
    Node b(98);

    a.next = &b;

   
    cout<<a.val<<endl;
    cout<<(*a.next).val<<endl; //long way
    cout<<a.next->val; // short cart
    return 0;
}