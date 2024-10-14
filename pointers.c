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

int main()
{
    int x = 10;
    //  printf("%p\n", x);
    int *p = &x; // aikhane muloto x er memory addressta e int p te rakha hocche
    // printf("%p\n", p);

    // dereference

    printf("%d\n", *p); // kono memory address theke oi integerer value ber kora jay

    *p = 300; // *p = x cause *p mane dereference , se ultimately main valuek e change kortece

    printf("%d\n", x);

    return 0;
}