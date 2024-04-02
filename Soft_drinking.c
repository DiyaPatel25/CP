#include <stdio.h>
int main()
{
    int n, k, l, c, d, i, p, n_l, n_p, a[3], min = 1;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &n_l, &n_p);
    a[1] = (k * l) / n_l;
    a[2] = c * d;
    a[3] = p / n_p;
    for (i = 1; i <= 3; i++)
    {
        if (a[min] > a[i])
        {
            min = i;
        }
    }

    printf("%d", (a[min] / n));
    return 0;
}