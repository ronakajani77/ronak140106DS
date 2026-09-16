//Create an array of size 10, input values and print the array and sum of all element in the array.

#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0;
    float avg;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum of all elements = %d\n", sum);

    avg = sum/10;
    printf("average = %f", avg);

    return 0;
}
