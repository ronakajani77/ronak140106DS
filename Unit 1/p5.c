//Create an array of size 10, find the largest value from the array.

#include <stdio.h>

int main()
{
    int numbers[10];
    int max;

    printf("Please enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("\nThe largest value you entered is: %d\n", max);

    return 0;
}
