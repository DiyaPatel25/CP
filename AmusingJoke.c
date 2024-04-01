#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101],s3[101];
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    int f=0;
    int len1=strlen(s1);
    int len2=strlen(s2);
    int max,min;
    if(len1+len2!=strlen(s3))
    {
        f=1;
    }
    else if(len1>=len2)
    {
        for(int i=0;i<len2;i++)
        {
            if(strchr(s3,s1[i])==NULL)  
            {
                f=1;
                break;
            }
            *strchr(s3,s1[i])='*';
            if(strchr(s3,s2[i])==NULL)
            {
                f=1;
                break;
            }
            *strchr(s3,s2[i])='*';
            
        }
        for(int i=len2;i<len1;i++)
        {
            if(strchr(s3,s1[i])==NULL)
            {
                f=1;
                break;
            }
            *strchr(s3,s1[i])='*';
        }
    }
    else if(len2>len1)
    {
        for(int i=0;i<len1;i++)
        {
            if(strchr(s3,s1[i])==NULL)  
            {
                f=1;
                break;
            }
            *strchr(s3,s1[i])='*';
            if(strchr(s3,s2[i])==NULL)
            {
                f=1;
                break;
            }
            *strchr(s3,s2[i])='*';
            
        }
        for(int i=len1;i<len2;i++)
        {
            if(strchr(s3,s2[i])==NULL)
            {
                f=1;
                break;
            }
            *strchr(s3,s2[i])='*';
        }
    }
    
    
    if(f==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
//In summary, strchr is a function used to find the first occurrence of a character in a string,

// while *strchr refers to dereferencing the pointer returned by strchr to obtain the character itself.