#include <stdio.h>
int main()
{
    int n, count = 0, a_1, a_2, a_3, a_4, a_5, b;
    scanf("%d", &n);

    a_1 = n / 100;
    b = n % 100;
    count = count + a_1;

    a_2 = b / 20;
    b = b % 20;
    count = count + a_2;

    a_3 = b / 10;
    b = b % 10;
    count = count + a_3;

    a_4 = b / 5;
    b = b % 5;
    count = count + a_4;

    a_5 = b / 1;
    b = b % 1;
    count = count + a_5;

    printf("%d", count);

    return 0;
}