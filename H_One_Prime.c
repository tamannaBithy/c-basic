#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int isPrime = 1;

    if (n < 2)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            printf("NO\n");
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("YES");
    }

    return 0;
}