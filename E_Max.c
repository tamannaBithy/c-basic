#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, max = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }

    printf("%d\n", max);
    return 0;
}

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a, min = INT_MIN, max=INT_MAX;

// ********#include <limits.h> use korle aivabe likha jay. INT_MIN diye (-2^32 -1) bujay & INT_MAX diye (2^32) bujay

//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &a);
//         if (a > max)
//         {
//             max = a;
//         }
//     }

//     printf("%d\n", max);
//     return 0;
// }