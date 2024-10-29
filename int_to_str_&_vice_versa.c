#include <stdio.h>
#include <string.h>

/////////////// string to integer ////////////////////////

// int main()
// {

//     char s[] = "3981";
//     int sum = 0;

//     for (int i = 0; i < strlen(s); i++)
//     {
//         int value = s[i] - '0';
//         sum = sum * 10 + value;
//     }

//     printf("%d", sum);
// }

/////////////// integer to string  ////////////////////////

int main()
{

    int n = 3456;
    char str[10];
    int i = 0;

    if (n == 0)
    {
        str[i] = '0';
    }

    while (n > 0)
    {
        str[i] = (n % 10) + '0';
        n = n / 10;
        i++;
    }

    str[i] = '\0';

    int start = 0, end = i - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("%s", str);
}