#include<stdio.h>
int main()
{
   
        int n;
        scanf("%d",&n);
        int c=0,p=0;
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);

            if(a==-1)
            {
                if(p<1)
                    c++;
                else
                    p--;
            }
            else
            {
                p=p+a;
            }
        }
        printf("%d",c);      
    return 0;
}