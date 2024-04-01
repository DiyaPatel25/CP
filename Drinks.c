#include <stdio.h>
int main()
{
    float count=0;
    int i,n;
    float p[100];
    float  pr_t;
     float pr;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &p[i]);
    }
    for ( i = 0; i < n; i++)
    {
        count=count+p[i];
    }
    pr_t=n*100;
    pr=count/pr_t;
    printf("%f", pr*100);
    

    return 0;
}