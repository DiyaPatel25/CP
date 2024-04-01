#include<stdio.h>
int main()
{
    int n,N;
    scanf("%d %d", &n,&N);
    if((n*N)%2==0)
    {
        printf("%d", (n*N)/2);
    }
    else
    {
        printf("%d", ((n*N)-1)/2);
    }
    return 0;
}