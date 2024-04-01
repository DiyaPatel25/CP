#include <stdio.h>
int main()
{
    int n, w, k, i, count = 0;
    scanf("%d %d %d", &k, &n, &w);
    for (i = 1; i <= w; i++)
    {
        count = count + k * i;
    }
    // printf("%d", count);
    if (count > n)
    {
        printf("%d", count - n);
    }
    else
    {
        printf("0");
    }
    return 0;
}