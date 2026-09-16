//Create arrays A, B and C of size 3, perform C = A + B.

#include <stdio.h>

int main()
{
    int A[3] = {5, 12, 8};
    int B[3] = {3, 4, 2};

    int C[3];

    for (int i = 0; i < 3; i++)
    {
        C[i] = A[i] + B[i];
    }

    printf("Array C results:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
