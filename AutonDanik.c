#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, A = 0, D = 0;
    scanf("%d\n", &n);
    char s[n];
    gets(s);

    for (i = 0; s[i] != 0; i++)
    {
        if (s[i] == 'A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }

    if (A > D)
    {
        printf("Anton");
    }
    else if (D > A)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }


return 0;
}