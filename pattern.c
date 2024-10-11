#include <stdio.h>

// int main()
// {
//     int n, k = 1;

//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         k++;
//         printf("\n");
//     }

//     return 0;
// }

// int main()
// {
//     int n, s, k = 1;
//     scanf("%d", &n);
//     s = n - 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }

//         s--;
//         k = k + 2;
//         printf("\n");
//     }
// }

// int main()
// {
//     int n, s = 0, k;
//     scanf("%d", &n);
//     k = 2 * n - 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }

//         s++;
//         k = k - 2;
//         printf("\n");
//     }
// }

// int main()
// {
//     int n, k;
//     scanf("%d", &n);
//     k = n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d ", j);
//         }
//         k--;
//         printf("\n");
//     }
// }

/////////////////// diamond pattern //////////////////

// int main()
// {
//     int n, s, k;
//     scanf("%d", &n);
//     s = n - 1;
//     k = 1;
//     for (int i = 1; i <= (2 * n) - 1; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         if (i <= n - 1)
//         {
//             s--;
//             k = k + 2;
//         }
//         else
//         {
//             s++;
//             k = k - 2;
//         }

//         printf("\n");
//     }
// }

int main()
{
}