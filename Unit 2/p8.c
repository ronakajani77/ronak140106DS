#include <stdio.h>

void findMinMax(int arr[], int index, int size, int *min, int *max)
{
    if (index == size - 1) {
        if (arr[index] < *min) {
            *min = arr[index];
        }
        if (arr[index] > *max) {
            *max = arr[index];
        }
        return;
    }

    if (arr[index] < *min) {
        *min = arr[index];
    }
    if (arr[index] > *max) {
        *max = arr[index];
    }

    findMinMax(arr, index + 1, size, min, max);
}

int main()
{
    int arr[] = {12, 3, 15, -7, 9, 45, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    findMinMax(arr, 0, size, &min, &max);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMinimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
