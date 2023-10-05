//Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int flag = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            printf("%d", i);
            flag = 1;
            break;
        }
    }
    if (flag == -1)
    {
        printf("-1");
    }

    return 0;
}