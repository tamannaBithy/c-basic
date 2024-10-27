#include <stdio.h>

////////// memory address ////////////////////////

// void fun(void)
// {
//     int s = 100;
//     printf("funer s er memory address - %p\n", &s);
// }

// int main()
// {
//     int s = 200;
//     printf("mainer s er memory address - %p\n", &s);
//     fun();
//     return 0;
// }

// int main()
// {
//     int x = 10;
//     //  printf("%p\n", x);
//     int *p = &x; // aikhane muloto x er memory addressta e int p te rakha hocche
//     // printf("%p\n", p);

//     // dereference

//     printf("%d\n", *p); // kono memory address theke oi integerer value ber kora jay

//     *p = 300; // *p = x cause *p mane dereference , se ultimately main valuek e change kortece

//     printf("%d\n", x);

//     return 0;
// }

int main()
{

    int ar[5] = {10, 20, 30, 40, 50};

    // printf("0th index er address - %p\n", &ar[0]);
    // printf("0th index er address - %p\n", ar);

    // printf("0th index er value - %p\n", ar[0]);
    // printf("0th index er value - %p\n", *ar);

    printf("1st index er value - %p\n", ar[1]);
    printf("1st index er value - %p\n", *(ar + 1));

    // muloto ar[1] == *(ar+1),  1[ar] == *(1 + ar). amra ar[1] likhe access korte chaile aitake se in the back *(ar+1) a convert kore ney
    // tai jekno index access korte hole ar[1] likhle o pawa jabe abar 1[ar] likhle o pawa jabe
}