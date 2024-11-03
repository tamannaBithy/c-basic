#include <stdio.h>

/// recursion holo jekhane function nijek nije call korte thake bar bar, need to understand call stack properly

/////// print 1 to 5 /////////////////////
// void fun(int i)
// {

//     if (i == 6)  /// this is called base case
//         return;
//     printf("%d\n", i);

//     fun(i + 1);
// }

// int main()
// {
//     int i = 1;
//     fun(i);
//     return 0;
// }

/////// print 5 to 1  //////////////////////
// void fun(int i)
// {

//     if (i == 0)
//         return;
//     printf("%d\n", i);

//     fun(i - 1);
// }

// int main()
// {
//     int i = 5;
//     fun(i);
//     return 0;
// }

/////// print 5 to 1 : reverse recursion /////////////////
// void fun(int i)
// {
//     if (i == 6)
//         return;
//     fun(i + 1);

//     printf("%d\n", i);
// }

// int main()
// {
//     int i = 1;
//     fun(i);
//     return 0;
// }

///////// print an array //////////////////////////////////

// void fun(int arr[], int n, int i)
// {
//     if (i == n)
//         return;
//     printf("%d\n", arr[i]);
//     fun(arr, n, i + 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     fun(arr, n, 0);
//     return 0;
// }

///////// length of a string //////////////////////////////////

int fun(char arr[], int i)
{
    if (arr[i] == '\0')
        return;

    int length = fun(arr, i + 1);
    return length + 1;
}

int main()
{

    char arr[6] = "hello";
    int result = fun(arr, 0);
    printf("%d", result);
    return 0;
}