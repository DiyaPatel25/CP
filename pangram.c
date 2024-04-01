#include <stdio.h>
#include <string.h>
int main()
{
    int n, k,f = 0;
    scanf("%d", &n);
    char s[1000],i,j;
    scanf("%s", s);
    for (i = 'a', j = 'A'; i <= 'z'|| j<='Z'; i++, j++)
    {
        for (k = 0; k<n; k++)
        {
            if (s[k] == i || s[k] == j)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            break;
    }
    if (f == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}