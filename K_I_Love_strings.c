#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char s[51], t[51];
        scanf("%50s %50s", s, t);

        int lengthS = strlen(s);
        int lengthT = strlen(t);
        int totalLength = lengthS + lengthT;

        char newString[100];

        int k = 0;
        for (int j = 0; j < lengthS || j < lengthT; j++)
        {

            if (j < lengthS)
            {
                newString[k] = s[j];
                k++;
            }

            if (j < lengthT)
            {
                newString[k] = t[j];
                k++;
            }
        }

        newString[k] = '\0';

        printf("%s\n", newString);
    }

    return 0;
}