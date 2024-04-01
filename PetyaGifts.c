#include<stdio.h>
int main()
{
    int i=0, n,temp;
    scanf("%d", &n);
    int p[n];
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        p[temp]=i;    }
   for ( i = 1; i <=n; i++)
   {
    printf("%d ",p[i]);
   }
   
    
    
    return 0;
}