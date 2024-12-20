#include <stdio.h>
#include <string.h>

// int main()
// {
//     char str[] = "bangladesh is a \"beautiful\" country.";
//     puts(str);  // puts akta depricated syntax either we can use fputs
//     fputs(str, stdout);
//     return 0;
// }

// int main()
// {

//     // char a[6] = {'r', 'a', 'h', 'a', 't'}; // aivabe string initialize kora jay tobe ai khetre pichone automatic null(\0) bosanor kono gurantee nai
//     // char a[6] = "rahat"; // aivabe o kora jay tobe ai khetre se automatic laste null bosay ney tai size ak besi hbe na hole vul result print korbe

//     // c programminge \0 diye null bujay

//     char a[] = "rahat"; // size declare na korle o chole tahle o sothik result dey
//     printf("%s\n", a);

//     int sz = sizeof(a) / sizeof(char);
//     printf("%d", sz);
//     return 0;
// }

// int main()
// {
//     char a[6];
//     scanf("%s", &a); // stringer khetre &a na diye sudu a dile o hoy
//     printf("%s\n", a);

//     // jodio ami bole dici array er size 5 kintu er besi input dile(like rahataaaa) o se thik thak moto kaj kore aitar karon windows extra memory allocate kore kintu linux ba onno kothao korle aita runtime error / segmentation fault namok error dibe. tobe ami chaile a[50] diye dite parbo, mane inputer theke size declaration choto hole somossa boro hole somossa nai

//     // r jehetu stringer khetre pichone null bosano lage(scanf automatic null bosay dey) tai a[5] na hoye a[6] hobe , otherwise windowse aita thik thak run korle o online/linuxe error dibe
//     return 0;
// }

//////// input with space///////////////////////////////////

// dui vabe space wala input print kora jay 1. gets diye , 2. fgets diye

// int main()
// {
//     char a[18];
//     // gets(a); // gets akta build in function.

//     fgets(a, 18, stdin); //(array name, size(joto bolbo toto size porjonto print korbe), stdin(akta rules : string input))
//     // fgets enter o print korte pare aikhane enter diye size 19 dile se enter o print korbe

//     printf("%s", a);
//     return 0;
// }

///////// length of a string ///////////////////////////////////

// int main()
// {
//     char a[100];
//     scanf("%s", a);
//     //// 1st way
//     // int count = 0;
//     // for (int i = 0; a[i] != '\0'; i++)
//     // {
//     //     count++;
//     // }
//     // printf("%d", count);

//     //// 2nd way : built in function

//     int st = strlen(a);
//     printf("%d", st);

//     return 0;
// }

///////// copy a string ///////////////////////////////////

// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);

//     ////////////// 1st way ///////////

//     // for (int i = 0; i <= strlen(b); i++)
//     // {
//     //     a[i] = b[i];
//     // }

//     ////////////// 2nd way : built-in func ///////////

//     strcpy(a, b); /// b er ja ache sob a te copy hbe

//     printf("%s", a);

//     return 0;
// }

///////// String Concatenation ///////////////////////////////////

// int main()
// {
//     char a[200], b[100];
//     scanf("%s %s", a, b);

//     ////////////// 1st way ///////////

//     // int k = strlen(a);
//     // for (int i = 0; i <= strlen(b); i++)
//     // {
//     //     a[k] = b[i];
//     //     k++;
//     // }

//     ////////////// 2nd way : built-in func ///////////

//     strcat(a, b); //// manual for loop diye ami b stringer koto tuku porjonto concat korte chai seta bole deya jay kintu built in func pura string ta e concat kore dibe

//     printf("%s", a);
//     return 0;
// }

//////// counting or frequency array for char value

// int main()
// {
//     char a[100];
//     scanf("%s", a);

//     int count[26] = {0};
//     for (int i = 0; i < strlen(a); i++)
//     {
//         int value = a[i] - 'a'; // you can use 97 too
//         count[value]++;
//     }

//     // for (int i = 0; i < 26; i++)
//     // {
//     //     if (count[i] != 0)
//     //     {
//     //         int value = i + 'a';
//     //         printf("%c - %d\n", value, count[i]);
//     //     }
//     // }

//     for (int i = 0; i < strlen(a); i++)
//     {

//         int value = a[i] - 'a';

//         if (count[value] != 0)
//         {
//             printf("%c - %d\n", value + 'a', count[value]);
//         }

//         count[value] = 0;
//     }

//     return 0;
// }

//////// consonant increase ////////////////////////

// int main()
// {
//     char s[100001];
//     scanf("%100000s", s);
//     int consonant = 0;

//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
//         {
//             consonant++;
//         }
//     }

//     printf("%d", consonant);
// }

//////////// Given a string of length N. Print the unique characters in the string in increasing alphabetical order.

int main()
{

    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", &s);

    char new_str[n + 1];

    int k = 0;
    for (int i = 0; i < n; i++)
    {

        int is_unique = 1;

        for (int j = 0; j < k; j++)
        {
            if (s[i] == new_str[j])
            {
                is_unique = 0;
                break;
            }
        }

        if (is_unique)
        {
            new_str[k] = s[i];
            k++;
        }
    }

    new_str[k] = '\0';

    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (new_str[i] > new_str[j])
            {
                char temp = new_str[i];
                new_str[i] = new_str[j];
                new_str[j] = temp;
            }
        }
    }

    printf("%s", new_str);
}
