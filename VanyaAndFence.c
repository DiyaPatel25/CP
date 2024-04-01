#include <stdio.h>
int main()
{
    int n, H, h, i, count = 0;
    scanf("%d %d", &n, &H);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &h);

        if (h <= H)
        {
            count++;
        }
        else
        {
            count = count + 2;
        }
    }
    printf("%d", count);

    return 0;
}