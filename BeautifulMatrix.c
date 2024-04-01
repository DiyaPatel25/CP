#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    unsigned int count_i, count_j;
    int A[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &A[i][j]);
            if (A[i][j] == 1)
    {
        count_i = (i > 2) ? (i - 2) : (2 - i);
        count_j = (j > 2) ? (j - 2) : (2 - j);
    }
        }
        printf("\n");
    }
    // if (A[i][j] == 1)
    // {
    //     count_i = (i > 2) ? (i - 2) : (2 - i);
    //     count_j = (j > 2) ? (j - 2) : (2 - j);
    // }

    printf("%d", count_i + count_j);
    return 0;
}