// #include <stdio.h>
// int main()
// {
//     // char name[20];
//     // printf("Enter name: ");
//     // scanf("%s", name);//When there is a space it store the first one
//     // printf("Your name is %s.", name);
//     // return 0;

//     // char name[20];
//     // printf("Enter name: ");
//     // gets(name);
//     // printf("Your name is:");
//     // puts(name);
//     // printf("\n");
//     // return 0;

    
// }

// #include <stdio.h>
// #include <string.h>
// void displayString(char str[]);
// int main()
// {
//     char str[50];
//     printf("Enter string: ");
//     fgets(str, sizeof str, stdin);
//     displayString(str); // Passing string to function return 0;
// }
// void displayString(char str[])
// {
//     printf("The passed String was: ");
//     puts(str);
// }

// #include <stdio.h>

// // Bubble Sort
// void bubbleSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // Swap elements arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // Selection Sort
// void selectionSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         // Swap elements arr[i] and arr[minIndex]
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// // Insertion Sort
// void insertionSort(int arr[], int size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// // Function to print an array
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {64, 25, 12, 22, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, size);

//     // Bubble Sort
//     bubbleSort(arr, size);
//     printf("After Bubble Sort: ");
//     printArray(arr, size);

//     // Reset array
//     int resetArr[] = {64, 25, 12, 22, 11};

//     // Selection Sort
//     selectionSort(resetArr, size);
//     printf("After Selection Sort: ");
//     printArray(resetArr, size);

//     // Reset array
//     int resetArr2[] = {64, 25, 12, 22, 11};

//     // Insertion Sort
//     insertionSort(resetArr2, size);
//     printf("After Insertion Sort: ");
//     printArray(resetArr2, size);

//     return 0;
// }

// #include <stdio.h>
// void increment(int *var)
// {
//     /* Although we are performing the increment on variable
//     * var, however the var is a pointer that holds the address
//     * of variable num, which means the increment is actually done
//    80
//     * on the address where value of num is stored.
//     */
//     *var = *var + 1;
// }
// int main()
// {
//     int num = 20;
//     /* This way of calling the function is known as call by
//      * reference. Instead of passing the variable num, we are
//      * passing the address of variable num
//      */
//     increment(&num);
//     printf("Value of num is: %d \n", num);
//     printf("The address of num is: %p", &num);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, i, *ptr, sum = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     ptr = (int *)malloc(n * sizeof(int));
//     // if memory cannot be allocated
//     if (ptr == NULL)
//     {
//         printf("Error! memory not allocated.");
//         exit(0);
//     }
//     printf("Enter elements: ");
//     for (i = 0; i < n; ++i)
//     {
//         scanf("%d", ptr + i);
//         sum += *(ptr + i);
//     }
//     printf("Sum = %d", sum);
//     // deallocating the memory
//     free(ptr);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, i, *ptr, sum = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     ptr = (int *)calloc(n, sizeof(int));
//     if (ptr == NULL)
//     {
//         printf("Error! memory not allocated.");
//         exit(0);
//     }
//     printf("Enter elements: ");
//     for (i = 0; i < n; ++i)
//     {
//         scanf("%d", ptr + i);
//         sum += *(ptr + i);
//     }
//     printf("Sum = %d", sum);
//     free(ptr);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[50];
    int salary;
} emp;
void main()
{
    emp e1;
    printf("\nEnter Employee record:\n");
    printf("\nEmployee name:\t");
    fgets(e1.name, sizeof(e1.name), stdin);
    printf("\nEnter Employee salary: \t");
    scanf("%d", &e1.salary);
    printf("\nstudent name is %s", e1.name);
    printf("\nSalary is %d \n", e1.salary);
}