#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char s[100];
    gets(s);
    len = strlen(s);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (s[j] != '+')
            {

                if (s[j] > s[j + 2])
                {
                    char temp = s[j];
                    s[j] = s[j + 2];
                    s[j + 2] = temp;
                }
            }
        }
    }
    puts(s);

    return 0;
}