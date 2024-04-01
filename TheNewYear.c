#include <stdio.h>
int main()
{
    int x[100], i, min = 0, max = 0,mid,d;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &x[i]);
        if(x[i]>x[max])
        {
            max=i;
        }
         if(x[i]<x[min])
        {
            min=i;
        }
    }
    mid=3-(max+min);
    // printf("%d %d %d\n", min,mid,max);
    d= ((x[mid]-x[min])+(x[max]-x[mid]));
    printf("%d", d);


    



    return 0;
}