#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int ans = a - b;
        printf("%d", ans);
    }
    else
    {
        printf("0");
    }

    return 0;
}