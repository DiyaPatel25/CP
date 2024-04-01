#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("I hate ");
        else
        {
            if (i % 2 == 0)
                printf("that I love ");
            else
                printf("that I hate ");
        }
    }
    printf("it");

    return 0;
}

