#include <stdio.h>

int factorial(int n);

int main()
{
    int num;
    int result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}

int factorial(int n)
{
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
