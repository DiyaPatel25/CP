#include <stdio.h>
int main()
{
    int n, k, i = 0, arr[50], count = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] > 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}