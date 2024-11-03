#include <stdio.h>
#include <limits.h>

void fun(int arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d %d", min, max);
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, n);

    return 0;
}