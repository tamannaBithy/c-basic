#include <stdio.h>

void fun(int a[][100], int b[][100], int c[][100], int n, int m, int i, int j)
{

    if (i == n)
    {
        return;
    }

    if (j == m)
    {
        fun(a, b, c, n, m, i + 1, 0);
        return;
    }

    c[i][j] = a[i][j] + b[i][j];

    fun(a, b, c, n, m, i, j + 1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100][100], b[100][100], c[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    fun(a, b, c, n, m, 0, 0);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         c[i][j] = a[i][j] + b[i][j];
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}