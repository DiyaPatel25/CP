#include <stdio.h>
int main()
{
    int n, i, group = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i]!=a[i+1])
        {
            group++;
        }
    }
    printf("%d", group);

    return 0;
}