#include <stdio.h>
int main()
{
    int n, i, a[10000], min = 0, max = 0, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[ max])
        {
            max = i;
            count++;
        }
        if (a[i] < a[min])
        {
            min = i;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}