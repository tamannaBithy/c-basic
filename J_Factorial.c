#include <stdio.h>

long long int fun(long long int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long int answer = fun(n - 1);
    return answer * n;
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int result = fun(n);
    printf("%lld", result);

    return 0;
}