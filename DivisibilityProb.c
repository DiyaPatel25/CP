#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    int a[t], b[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < t; i++)
    {
        if (a[i] % b[i] == 0)
        {
            printf("0\n");
        }
        else
        {
                printf("%d\n",(b[i]-(a[i]%b[i])));
        }
    }

    return 0;
}