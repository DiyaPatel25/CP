#include <stdio.h>
int main()
{
    int t, i, max = 0, a[3], j, sum;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
        }
        for (j = 0; j < 3; j++)
        {
            if (a[j] > a[max])
            {
                max = j;
            }
        }
        // printf("%d\n",a[max]);
        if (max == 0)
        {
            sum = a[1] + a[2];
        }
        if (max == 1)
        {
            sum = a[0] + a[2];
        }
        if (max == 2)
        {
            sum = a[1] + a[0];
        }
        if (sum == a[max])
        {
            printf("YES\n");
            // break;
        }
        else
        {
            printf("NO\n");
            // break;
        }
    }

    return 0;
}