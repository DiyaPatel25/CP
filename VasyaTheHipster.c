#include <stdio.h>
int main()
{
    int r, b, s, t_1, t_2;
    scanf("%d%d", &r, &b);
    if (r == b)
    {
        t_1 = r;
        t_2 = 0;
    }
    if (r > b)
    {
        s = r - b;

        if (s > 0)
        {
            t_1 = b;
            t_2 = s / 2;
        }
    }
    if (r < b)
    {
        s = b - r;

        if (s > 0)
        {
            t_1 = r;
            t_2 = s / 2;
        }
    }
    printf("%d %d", t_1, t_2);
    return 0;
}