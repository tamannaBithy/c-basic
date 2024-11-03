#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min, max, middle;

    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    if (a == min && b == max || b == min && a == max)
    {
        middle = c;
    }
    else if (a == min && c == max || c == min && a == max)
    {
        middle = b;
    }
    else
    {
        middle = a;
    }
    printf("%d\n%d\n%d\n\n", min, middle, max);

    printf("%d\n%d\n%d", a, b, c);
    return 0;
}