#include <bits/stdc++.h>
using namespace std;
// Create a node
class Node
{ // Constructor
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// Insert at tail
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val); // create a new node
    if (head == NULL)
    { // check there is any node exist or not
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    cout << "Option 1 : insert at tail : " << endl;
    int op;
    cin>>op;

    if (op == 1)
    {
        int val;
        cout << "Enter a value : ";
        cin >> val;
        insert_at_tail(head, val);
    }
    print_linked_list(head);

    return 0;
}