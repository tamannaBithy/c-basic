#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];

    scanf("%s", s);

    char target[] = "hello";
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == target[j])
        {
            j++;
        }

        if (j == 5)
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
