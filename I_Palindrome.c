#include <stdio.h>
#include <string.h>

// int main()
// {
//     char a[1001];
//     scanf("%s", &a);
//     char b[1001];
//     int j = 0;
//     for (int i = strlen(a) - 1; i >= 0; i--)
//     {
//         b[j] = a[i];
//         j++;
//     }

//     b[j] = '\0';
//     if (strcmp(a, b) == 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }

///////////// 2nd way : two-pointer technique /////////////////////

int main()
{
    char a[1001];
    scanf("%s", &a);
    int j = 0;
    int is_palindrome = 1;
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        if (a[j] == a[i])
        {
            is_palindrome = 1;
            j++;
        }
        else
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}