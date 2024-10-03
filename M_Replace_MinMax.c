#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = INT_MAX, posMin, posMax;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            posMin = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            posMax = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[posMax] = min;
        a[posMin] = max;
        printf("%d ", a[i]);
    }

    return 0;
}