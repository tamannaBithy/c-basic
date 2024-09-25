#include <stdio.h>

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n <= m && n <= k)
    {

        printf("%lld", n);
    }
    else if (m <= n && m <= k)
    {

        long long int restEyes = n - m;
        long long int restBodies = k - m;
        long long int totalEyes = restEyes / 2;

        if (totalEyes < restBodies)
        {
            long long int total = m + totalEyes;
            printf("%lld", total);
        }
        else
        {
            printf("%lld", k);
        }
    }
    else
    {
        printf("%lld", k);
    }

    return 0;
}