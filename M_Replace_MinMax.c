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
    int min = INT_MAX, position, temp;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            position = i;
            temp = position;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            position = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[position] = min;
        a[temp] = max;
        printf("%d ", a[i]);
    }

    return 0;
}