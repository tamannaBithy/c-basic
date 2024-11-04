#include <stdio.h>

long long int fun(long long int ar[], int n, int i)
{

    if (i == n)
    {
        return 0;
    }

    long long int sum = ar[i] + fun(ar, n, i + 1);

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    int i = 0;
    long long int sum = fun(ar, n, i);

    printf("%lld\n", sum);
    return 0;
}