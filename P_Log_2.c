#include <stdio.h>

int fun(long long n)
{
    if (n == 1)
    {
        return 0;
    }

    return 1 + fun(n / 2);
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    int result = fun(n);
    printf("%d\n", result);
    return 0;
}