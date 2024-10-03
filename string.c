#include <stdio.h>
#include <string.h>

// int main()
// {
//     int a[5];
//     printf("%d\n", sizeof(a));
//     printf("%d\n", sizeof(int));           // int 4 byte kore jayga ney
//     printf("%d\n", sizeof(long long int)); // long long int 8 byte kore jayga ney
//     // to find out array size
//     int arrSize = sizeof(a) / sizeof(int);
//     printf("%d\n", arrSize);
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

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    ////////////// 1st way ///////////

    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[i] = b[i];
    // }

    ////////////// 2nd way ///////////

    strcpy(a, b); /// b er ja ache sob a te copy hbe

    printf("%s", a);

    return 0;
}