#include <stdio.h>
void fun(int *ar, int n)
{
    ar[0] = 300;
    printf("\n");
}
int main()
{

    int ar[5] = {5, 10, 15, 20, 25};

    fun(ar, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}