#include <stdio.h>
int main()
{
    int n, k, i = 0;
    scanf("%d %d", &n, &k);
    while (k > i)
    {
        if (n % 10 != 0)
        {
            n--;
            i++;
        }
        else
        {
            n = n / 10;
            i++;
        }
    }
    printf("%d", n);
    return 0;
}