#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n;
    char s[50];
    scanf("%d", &n);
    scanf("%s", s);
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j <n; j++)
        {
            if(s[i]!=s[j+1] && (s[i]==s[j]||s[j]==s[j+1]))
            {
                printf("%d",i);
            
            break;
            }
           
        }
        
    }
    


    return 0;
}