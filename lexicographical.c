#include <stdio.h>
#include <string.h>

//// lexixographical comparison holo duita stringer modde konta choto boro seta ber kora

/////////////// 1st way ///////////////

// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", &a, &b);
//     int i = 0;
//     while (1)
//     {
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("same\n");
//             break;
//         }
//         else if (a[i] == '\0')
//         {
//             printf("a choto\n");
//             break;
//         }
//         else if (b[i] == '\0')
//         {
//             printf("b choto\n");
//             break;
//         }

//         if (a[i] == b[i])
//         {
//             i++;
//         }
//         else if (a[i] < b[i])
//         {
//             printf("a choto\n");
//             break;
//         }
//         else
//         {
//             printf("b choto\n");
//             break;
//         }
//     }
//     return 0;
// }

///////////// 2nd way: built in func //////////////

// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", &a, &b);
//     int v = strcmp(a, b);
//     printf("%d\n", v);
//     if (v < 0)
//     {
//         printf("a choto\n");
//     }
//     else if (v > 0)
//     {
//         printf("b choto\n");
//     }
//     else
//     {
//         printf("same");
//     }
// }

/////////////////////// find out the min & max string ///////////

int main()
{
    char a[1001], b[1001], c[1001];
    scanf("%s %s %s", a, b, c);

    if (strcmp(a, b) <= 0 && strcmp(a, c) <= 0)
    {
        printf("%s\n", a);
    }
    else if (strcmp(b, a) <= 0 && strcmp(b, c) <= 0)
    {
        printf("%s\n", b);
    }
    else
    {
        printf("%s\n", c);
    }

    if (strcmp(a, b) >= 0 && strcmp(a, c) >= 0)
    {
        printf("%s\n", a);
    }
    else if (strcmp(b, a) >= 0 && strcmp(b, c) >= 0)
    {
        printf("%s\n", b);
    }
    else
    {
        printf("%s\n", c);
    }
}