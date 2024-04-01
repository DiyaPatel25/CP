#include <stdio.h>
int main()
{
    int k, r, shovel = 1;
    scanf("%d%d", &k, &r);
    while (1)
    {
        if ((k * shovel) % 10 == r || (k * shovel) % 10 == 0)
        {
            printf("%d", shovel);
            break;
        }
        shovel++;
    }

    return 0;
}