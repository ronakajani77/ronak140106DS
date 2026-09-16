#include <stdio.h>

void findAbsoluteSmallestDivisor()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer greater than 0.\n");
        return;
    }

    printf("The absolute smallest divisor of %d is: 1\n", num);
}

int main()
{
    findAbsoluteSmallestDivisor();
    return 0;
}
