#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int is_palindrome = 1;

    for (int i = n - 1, j = 0; i >= 0; i--)
    {
        if (ar[i] == ar[j])
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

    return 0;
}