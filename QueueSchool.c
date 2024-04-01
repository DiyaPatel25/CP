#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, t;
    scanf("%d %d", &n, &t);
    char s[n];
    scanf("%s", s);
    while (t)
    {
        for (i = 1; i < n; i++)
        {
            if (s[i - 1] == 'B' && s[i] == 'G')
            {
                s[i - 1] = 'G';
                s[i] = 'B';
                i++;
            }
        }
        t--;
    }

    printf("%s", s);

    return 0;
}