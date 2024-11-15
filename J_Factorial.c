#include <stdio.h>

int fun(int n)
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
    printf("%lld\n", result);

    return 0;
}