//Create an array of size 10, input values and print the array and search an element in the array.

#include <stdio.h>

int main()
{
    int arr[10];
    int i, search_element, found = 0;

    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    printf("Enter the element you want to search: ");
    scanf("%d", &search_element);

    for(i = 0; i < 10; i++)
    {
        if(arr[i] == search_element)
        {
            printf("Element %d found at position (index) %d.\n", search_element, i);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Element %d is not in the array.\n", search_element);
    }

    return 0;
}
