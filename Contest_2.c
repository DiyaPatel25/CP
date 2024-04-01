#include <stdio.h>
// int sub(n);
int main()
{
    int n, j, i, t, sum = 0, count = 0;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            int a[n];
            scanf("%d", &a);
        }
    }

    while (i < n)
    {
        int a[n];
        sum = a[i] + sum;
        i++;
    }
    for ( i = 0; i < n; i++)
    {
        if(sum%3==0)
        {
            count=count;
            break;
        }
        else
        {
            n=n-1;
            count++;
        }
    }
    

    for (i = 0; i < n; i++)
    {
        printf("%d", count);
    }

    return 0;
}

