#include <stdio.h>
int main()
{
    long int s[4], i, j, count = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%ld", &s[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);

    return 0;
}