#include <stdio.h>
int main()
{
    int i, min = 0, max = 0,mi, a, b, c, x[4];
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &x[i]);
         if (x[i] > max)
        {
            max = x[i];
            mi=i;
        }
    }
    for (i = 0; i < 4; i++)
    {
        if(i!=mi)
        {
            printf("%d ", max-x[i]);
        }
    }
   

    return 0;
}