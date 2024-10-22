#include <stdio.h>

// int main()
// {
//     int n, x;
//     scanf("%d %d", &n, &x);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int false = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             if (a[i] + a[j] == x)
//             {
//                 false = 1;
//             }
//         }
//     }

//     if (false == 1)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }

//     return 0;
// }

//////////// sorting ////////////////////////

/////////// ascending order

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             if (a[i] > a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

////////// descending order

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}