#include <stdio.h>

// problem - 2

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     float division = a * 1.0 / b;
//     printf("%d / %d = %.2f", a, b, division);
//     return 0;
// }

// problem - 3

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (a % 2 == 0)
//     {
//         printf("even");
//     }
//     else
//     {
//         printf("odd");
//     }
//     return 0;
// }

// problem - 4

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (a > 0)
//     {
//         printf("positive");
//     }
//     else if (a < 0)
//     {
//         printf("negative");
//     }
//     else
//     {
//         printf("zero");
//     }
//     return 0;
// }

// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     if (a >= 'a' && a <= 'z')
//     {
//         int ans = a - 32;
//         printf("%c", ans);
//     }
//     else
//     {
//         int ans = a + 32;
//         printf("%c", ans);
//     }
//     return 0;
// }

// between 3 number which one is min & which one is max
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     // minimum
//     if (a <= b && a <= c)
//     {
//         printf("%d ", a);
//     }
//     else if (b <= a && b <= c)
//     {
//         printf("%d ", b);
//     }
//     else
//     {
//         printf("%d ", c);
//     }

//     // maximum
//     if (a >= b && a >= c)
//     {
//         printf("%d\n", a);
//     }
//     else if (b >= a && b >= c)
//     {
//         printf("%d\n", b);
//     }
//     else
//     {
//         printf("%d\n", c);
//     }

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