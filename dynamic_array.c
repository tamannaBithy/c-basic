#include <stdio.h>
#include <stdlib.h>

///// the count of numbers that have appeared only once in the array

// #define MAX_VALUE 100000 // Assuming the maximum value of an element is 100000

// int main()
// {
//     int n;
//     if (scanf("%d", &n) != 1 || n <= 0)
//     {
//         printf("Invalid input for n\n");
//         return 1;
//     }

//     int *arr = malloc(n * sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (scanf("%d", &arr[i]) != 1 || arr[i] < 0 || arr[i] > MAX_VALUE)
//         {
//             printf("Invalid input for array element\n");
//             free(arr);
//             return 1;
//         }
//     }

//     int *freq = calloc(MAX_VALUE + 1, sizeof(int));
//     if (freq == NULL)
//     {
//         printf("Memory allocation failed\n");
//         free(arr);
//         return 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//     }

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (freq[arr[i]] == 1)
//         {
//             count++;
//         }
//     }

//     printf("%d\n", count);

//     free(arr);
//     free(freq);
//     return 0;
// }

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(1 * sizeof(int));
    if (arr == NULL)
    {
        printf("memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num); // Read each integer

        arr[i] = num;

        if (i < n - 1)
        {
            int *temp = realloc(arr, (i + 2) * sizeof(int));
            if (temp == NULL)
            {
                printf("Memory reallocation failed\n");
                free(arr);
                return 1;
            }
            arr = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }

    free(arr);
}