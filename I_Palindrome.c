#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    scanf("%s", &a);
    char b[1001];
    int j = 0;
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }

    b[j] = '\0';
    if (strcmp(a, b) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}