#include <stdio.h>

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
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // int m;
    // scanf("%d", &m);
    // int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int ans[n + m];

    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }

    int i = n;

    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}