#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;

    Node(int val){
        this->val = val;
        this ->next = NULL;
    }
};
int main()
{
    Node *head = new Node(27);
    Node *a = new Node(70);
    Node *b = new Node(100);

    head->next = a;
    a->next = b;
    cout<<head->next->val<<endl;
    cout<<a->next<<endl;
    cout<<b<<endl;

    return 0;
}