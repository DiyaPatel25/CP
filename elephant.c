#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    c = a / 5;
    b = a % 5;
    if ( b == 0)
    {
         b = 0;
    }
    else
    {
        if (b < 5)
        {
            b = 1;
        }
    }

    printf("%d", b + c);

    return 0;
}