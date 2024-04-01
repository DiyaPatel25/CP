#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char s[1000];
    gets(s);

    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }

    for (i = 1; s[i] != '\0'; i++)
    {
        if (s[i - 1] == 32) // 32=blank space
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] -= 32;
            }
        }
    }
    puts(s);

    return 0;
}