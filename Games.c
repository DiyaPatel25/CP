#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, h[100], a[100],count=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &h[i],&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(h[i]==a[j])
            {
                count++;
            }
        }
        
    }
    printf("%d", count);
    

    return 0;
}