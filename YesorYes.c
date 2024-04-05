#include <stdio.h>
#include <string.h>
int main()
{
    int i, t, j;
    char s[4] = "YES", a[4];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", a);
        for (j = 0; j < 3; j++)
        {
            if (a[j] >= 'a' && a[j] <= 'z')
            {
                a[j] = a[j] - 32;
            }
        }

        int f = strcmp(a, s);
        if (f == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}