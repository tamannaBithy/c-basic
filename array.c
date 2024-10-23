#include <stdio.h>

// int main()
// {
//     int a[5];
//     printf("%d\n", sizeof(a));
//     printf("%d\n", sizeof(int));           // int 4 byte kore jayga ney
//     printf("%d\n", sizeof(long long int)); // long long int 8 byte kore jayga ney
//     // to find out array size
//     int arrSize = sizeof(a) / sizeof(int);
//     printf("%d\n", arrSize);
//     return 0;
// }

// insert an element in an array
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }

//     int pos, val;
//     scanf("%d %d", &pos, &val);

//     for (int i = n; i >= pos + 1; i--)
//     {
//         ar[i] = ar[i - 1];
//     }
//     ar[pos] = val;
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d ", ar[i]);
//     }
// }

// remove an element from an array
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }

//     int pos;
//     scanf("%d", &pos);
//     for (int i = pos; i < n - 1; i++)
//     {
//         ar[i] = ar[i + 1];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         printf("%d ", ar[i]);
//     }
// }

// reversing an array, two pointers technique
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }

//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         int temp = ar[i];
//         ar[i] = ar[j];
//         ar[j] = temp;
//         i++;
//         j--;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", ar[i]);
//     }
// }

// copy an array
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int a[n], b[m];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     // int m;
//     // scanf("%d", &m);
//     // int b[m];
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &b[i]);
//     }

//     int ans[n + m];

//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = a[i];
//     }

//     int i = n;

//     for (int j = 0; j < m; j++)
//     {
//         ans[i] = b[j];
//         i++;
//     }

//     for (int i = 0; i < n + m; i++)
//     {
//         printf("%d ", ans[i]);
//     }

//     return 0;
// }

//////// counting or frequency array for int value

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int count[7] = {0}; // array te heighest num jeta thakbe tar theke 1 besi hbe. amr array ta chilo 1 2 3 1 4 5 6 0 2 5 0 3 1

//     for (int i = 0; i < n; i++)
//     {
//         int val = a[i];
//         count[val]++;
//     }

//     for (int i = 0; i < sizeof(count) / sizeof(int); i++)
//     {
//         printf("%d - %d\n", i, count[i]);
//     }
// }

/////////////////// loop on a int /////////////

int main()
{
    int n = 358;

    int arr[10] = {0};
    int length = 0;

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n % 10;
        n = n / 10;
        length++;
        if (n == 0)
        {
            break;
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
}