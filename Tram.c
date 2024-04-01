#include <stdio.h>

int main()
{
    int n, i, a, b, psg = 0, max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        psg = b - a + psg;

        if (max < psg)
        {
            max = psg;
        }
    }
    printf("%d", max);

    return 0;
}
