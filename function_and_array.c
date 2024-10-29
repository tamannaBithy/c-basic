#include <stdio.h>
#include <string.h>

// // for numbers
// void func(int arr[], int n) // int arr[] aitak int*arr aivabe o lekha jabe
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// // for strings
// void func2(char arr[])
// {

//     printf("%d ", strlen(arr)); // aikhane automatic array er length pawa jay wihout null value. mane jotogula character totota e length
// }

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     char arr2[20] = "hello";
//     func(arr, 5);
//     printf("\n");
//     func2(arr2); // stringer khetre size pathate hoy na, functioner vitore amnitei pawa jay
//     return 0;
// }

int main()
{

    int ary[4] = {1, 2, 3, 4};

    int *p;

    p = ary + 3;

    *p = 5;

    printf("%d\n", ary[3]);
}