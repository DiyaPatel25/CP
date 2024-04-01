#include <stdio.h>

int main()
{
    int n, i, j, p_x, p_y, f = 0;
    scanf("%d\n", &n);
    scanf("%d", &p_x);
    int x[p_x];
    for (i = 0; i < p_x; i++)
    {
        scanf("%d", &x[i]);
    }
    scanf("%d", &p_y);
    int y[p_y];
    for (i = 0; i < p_y; i++)
    {
        scanf("%d", &y[i]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < p_x; j++)
        {
            if (i == x[j])
            {
                f = 1;
                break;
            }
            else
            {
                f = 0;
            }
        }
        if (f == 0)
        {
            for (j = 0; j < p_y; j++)
            {
                if (i == y[j])
                {
                    f = 1;
                    break;
                }
                else
                {
                    f = 0;
                }
            }
        }
        if (f == 0)
        {
            break;
        }
    }
    if (f == 1)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }

    return 0;
}
