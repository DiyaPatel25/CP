#include <stdio.h>
int main()
{
    int n, i, room = 0;
    scanf("%d", &n);
    int p[n], q[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &p[i], &q[i]);
    }
    for (i = 0; i < n; i++)
    {
        if ((q[i] - p[i]) >= 2)
        {
            room++;
        }
    }
    printf("%d", room);

    return 0;
}