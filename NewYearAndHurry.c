#include<stdio.h>
int main()
{
    int n,k,c=0;
    scanf("%d %d",&n,&k);
    int t=240-k;
    for(int i=1;i<=n;i++)
    {
        if(t>=5*i)
        {
            t=t-5*i;
            c++;
        }
    }
    printf("%d",c);
    return 0;
}