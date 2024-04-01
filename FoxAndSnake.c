#include <stdio.h>
int main()
{
    int i, j, n, m, f = 0;
    int arr[3][50];
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j <= m; j++)
            {
                printf("#");
            }
        }
        else
        {
            // printf("\n");
            if (f == 0)
            {

                for (j = 1; j <= m - 1; j++) // 2,4.
                {
                    printf(".");
                }
                printf("#");
                f=1;
            }
            else if (f == 1)
            {
                printf("#");
                for (j = 1; j < m; j++)
                {
                    printf("."); // 4,8..
                    // break;
                }
                f = 0;
            }
        }

        printf("\n");
    }

    return 0;
}