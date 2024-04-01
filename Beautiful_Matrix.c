#include <stdio.h>
int main()
{
    int i = 0, j = 0, count, count_i, count_j;
    int A[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &A[i][j]);
       
    if (A[i][j] == 1)
    {
        if (i > 2)
        {
            count_i = i - 2;
        }
        else
        {
            count_i = 2 - i;
        }
    }
    if (A[i][j] == 1)
    {
        if (j > 2)
        {
            count_j = j - 2;
        }
        else
        {
            count_j = 2 - j;
        }
    }
     }
        printf("\n");
    }

    printf("%d", count_i + count_j);
    return 0;
}