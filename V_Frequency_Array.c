#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n];
    int count[m + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        if (value <= m)
        {
            count[value]++;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}