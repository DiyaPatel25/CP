#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char a[1000000000], b[1000000000],out[1000000000];
    gets(a);
    gets(b);
    for ( i = 0; i < strlen(a[ i]); i++)
    {
        if(a[i]==b[i])
        {
            out[i]=0;
        }
        else
        {
            out[i]=1;
        }
    }
    puts(out);
    
    return 0;
}