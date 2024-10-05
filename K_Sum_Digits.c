#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char digits[N + 1];
    scanf("%s", digits);

    long long sum = 0;

    for (int i = 0; i < N; i++)
    {

        sum += digits[i] - '0';
    }

    printf("%lld\n", sum);

    return 0;
}