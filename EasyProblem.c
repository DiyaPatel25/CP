#include <stdio.h>
int main()
{
    int n, i, j, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }
    for (j = 0; j < n; j++)
    {
        count = count + arr[j];
    }

    if (count >= 1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}