#include <stdio.h>
#include <stdlib.h>

/// 2d array is nothing but array of array . it is also called matrix

/////// how to take input and output /////
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int arr[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

////////// check if it is a scaler matrix or not //////////////

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n][n];

//     for (size_t i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     int element = arr[0][0];

//     int flag = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {
//                 if (arr[i][j] != element)
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//             else
//             {
//                 if (arr[i][j] != 0)
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//     }

//     if (flag)
//     {
//         printf("scaler");
//     }
//     else
//     {
//         printf("not scaler");
//     }
// }

/// scaler matrixer primary diagonaler sobgula value same & bakigula 0 hoite hoy for ex:
//  6 0 0
//  0 6 0
//  0 0 6
/// primary diagonaler khetre i == j & secondary diagonaler khetre i+j = n -1

////// absolute difference between two diagonal summation

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n][n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     int main_diagonal = 0, secondary_diagonal = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {

//             if (i == j)
//             {
//                 main_diagonal += arr[i][j];
//             }

//             if (i + j == n - 1)
//             {
//                 secondary_diagonal += arr[i][j];
//             }
//         }
//     }

//     int diff = abs(main_diagonal - secondary_diagonal);
//     printf("%d\n", diff);
//     return 0;
// }

int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int num[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &num[i]);
    }

    int k = 0;

    while (k < x)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                if (arr[i][j] == num[k])
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
        k++;
    }
}
