#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char a[101];
    for (int i = 1; i <= t; i++)
    {

        scanf("%s", &a);

        int length = strlen(a);

        if (length > 10)
        {

            printf("%c%d%c\n", a[0], length - 2, a[length - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }

    return 0;
}