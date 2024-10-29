#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int main_diagonal = 0, secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                main_diagonal += arr[i][j];
            }

            if (i + j == n - 1)
            {
                secondary_diagonal += arr[i][j];
            }
        }
    }

    int diff = abs(main_diagonal - secondary_diagonal);
    printf("%d", diff);
    return 0;
}