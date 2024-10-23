#include <stdio.h>

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {

        if (n <= 0 || m <= 0)
        {
            break;
        }

        int start = n > m ? m : n;
        int end = n < m ? m : n;

        int sum = 0;

        for (int i = start; i <= end; i++)
        {
            sum = sum + i;
            printf("%d ", i);
        }
        printf("sum =%d", sum);
        printf("\n");
    }

    return 0;
}