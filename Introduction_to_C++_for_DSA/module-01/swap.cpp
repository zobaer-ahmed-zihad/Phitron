#include<iostream>
#include<utility>
using namespace std;

// int my_swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    int a, b;
    cin>> a >> b;
    // int sw = my_swap(&a, &b); // manual system
    swap(a,b); // build in function

    cout<<a<< " "<<b;

    return 0;
}