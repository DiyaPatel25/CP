#include <stdio.h>
int main()
{
    int k, l, m, n, d, i = 1, count = 0;
    scanf("%d\n %d\n %d\n %d\n %d", &k, &l, &m, &n, &d);
    if (k == 1)
    {
        printf("%d", d);
    }
    else
    {

        for (i = 1; i <= d; i++)
        {
            if (i % k == 0)
            {
                count++;
            }
            else if(i%l==0)
            {
                count++;
            }
            else if(i%m==0)
            {
                count++;
            }
            else if (i%n==0)
            {
                count++;
            }
        }
        printf("%d", count);
        
    }
    return 0;
}