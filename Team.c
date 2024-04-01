#include <stdio.h>
int main()
{
    int n, count = 0, i = 0, j = 0;

    scanf("%d", &n);
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    do
    {
        if ((arr[i][j] + arr[i][j + 1] + arr[i][j + 2]) >= 2)
        {

            count = (count + 1);
            i++;
        }
        else
        {
            i++;
        }
    } while (i < n);

    printf("%d", count);
    return 0;
}
