#include <stdio.h>
#include <string.h>

void capital(char s1[100])
{
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >=97) 
        {// convert the input to uppercase.
            s1[i] = s1[i] - 32;
        }
    }
}
int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    capital(s1);
    capital(s2);
    if (strcmp(s1, s2)>0)
    printf("1");
    else if (strcmp(s1,s2)<0)
    printf("-1");
    else
    printf("0");

    return 0;
}