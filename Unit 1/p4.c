//Create arrays A, B of size 3, C of size 6, merge A and B into C.

#include <stdio.h>

int main()
{
    int A[3];
    int B[3];
    int C[6];
    int i;

    printf("Enter 3 elements for Array A:\n");
    for (i = 0; i < 3; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nEnter 3 elements for Array B:\n");
    for (i = 0; i < 3; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 3; i++)
    {
        C[i] = A[i];
    }

    for (i = 0; i < 3; i++)
    {
        C[3 + i] = B[i];
    }

    printf("\nMerged Array C:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
