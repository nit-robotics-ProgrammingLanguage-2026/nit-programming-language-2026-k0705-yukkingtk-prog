
#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int x);

int main(void)
{
    int n;
    int result;

    scanf("%d", &n);

    if (n > 9966990)
    {
        printf("NG");
        return 0;
    }

    result = gcd(9966990, n);

    printf("%d", result);

    return 0;
}

int gcd(int m, int x)
{
    int remainder;
    int a = m;
    int b = x;

    for (; b != 0;)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return abs(a);
}
