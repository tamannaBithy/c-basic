#include <stdio.h>

int fun(char a[], int i)
{

    if (a[i] == '\0')
    {
        return 0;
    }

    int ans = fun(a, i + 1);

    if (a[i] >= 'A' && a[i] <= 'Z')
    {
        a[i] += 32;
    }

    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    char a[201];
    fgets(a, 201, stdin);
    int count = fun(a, 0);
    printf("%d\n", count);

    return 0;
}