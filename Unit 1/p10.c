//Write a program to multiply two matrices.

#include <stdio.h>
#define MAX 10

int main()
{
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Error: Columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }

    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            for (k = 0; k < c1; ++k)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Output Matrix:\n");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
