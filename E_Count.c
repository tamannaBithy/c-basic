#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000001];
    scanf("%s", &a);
    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        // printf("%d", a[i]); // aikhane ascii value pabo cause ami char niye int print korteci. 0 er ascii value 48 tai amr int value pete hole 48 ba '0'(char) biyog kora lagbe

        sum = sum + (a[i] - '0');
    }
    printf("%d", sum);
    return 0;
}