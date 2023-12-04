#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;
};

int main()
{
    Node a,b;
    a.val = 27;
    b.val = 64;

    a.next = &b;
    b.next = NULL;

    cout<<a.val<<endl;
    cout<<(*a.next).val<<endl; //long way
    cout<<a.next->val; // short cart
    return 0;
}