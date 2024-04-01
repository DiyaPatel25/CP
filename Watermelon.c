#include<stdio.h>
int main()
{
    int w,w1;
    printf("Enter the weight of watermelon\n");
    scanf("%d", &w);
    w1=w/2;
    printf("divided weight is %d", &w1);
    if(w1>2)
    {
        printf("YES");
    }
    else
{
    printf("NO");
}
    return 0;
}