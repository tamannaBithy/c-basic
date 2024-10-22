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
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // minimum
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }

    // maximum
    if (a >= b && a >= c)
    {
        printf("%d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }

    return 0;
}

////////////////// summation of 1 to n ///////////////

int main()
{
    int n;
    scanf("%d", &n);
    long long sum = (1LL * (n + 1) * n) / 2;
    printf("%lld", sum);
}
