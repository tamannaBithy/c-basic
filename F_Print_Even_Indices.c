#include <stdio.h>

void fun(int ar[], int n)
{

    if (n % 2 == 0)
    {

        if (n == 0)
            return;

        printf("%d ", ar[n - 2]);

        fun(ar, n - 2);
    }
    else
    {
        if (n == 0)
            return;

        printf("%d ", ar[n - 1]);

        fun(ar, n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    fun(ar, n);
    return 0;
}