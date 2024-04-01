#include <stdio.h>
int main()
{
    int t, i = 0, k, n[10000], c = 0;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 0; i < t; i++)
    {

        if (n[i] == 1 || n[i] == 2)
        {
            printf("0\n");
        }
        else
        {
            if (n[i] % 2 != 0)
            {
                c = n[i] / 2;
                printf("%d\n", c);
            }
            else
            {
                c = (n[i] / 2) - 1;
                printf("%d\n", c);
            }
        }
    }
    return 0;
}