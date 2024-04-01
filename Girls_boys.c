#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int count = 0;
    int freq[160] = {0};
    int len = strlen(s);
    int ans, ans2, ans_new;

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i]]++;
    }
    for (int i = 0; i < len; i++)
    {
        if (freq[s[i]] == 1)
        {
            count++;
        }
    }
            // printf("%d", count);
            // printf("%d", strlen(s));
    ans = len - count; //repeatable
    if (ans % 2 == 0)
    {
        ans2 = ans / 2;
    }
    else
    {
        ans2 = (ans / 2) + ans;
    }

    ans_new = len + ans2;
    if (ans_new % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}