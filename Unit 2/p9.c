#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert(int value)
{
    if (rear == SIZE - 1)
    {
        printf("\nQueue Overflow! Cannot insert %d.\n", value);
    } else {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("\n%d inserted successfully.\n", value);
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue Underflow! Nothing to delete.\n");
    } else {
        printf("\nDeleted element: %d\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty.\n");
    } else {
        printf("\nQueue elements are: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n1. Insert (Enqueue)");
        printf("\n2. Delete (Dequeue)");
        printf("\n3. Display Queue");
        printf("\n4. Exit");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting program.\n");
                exit(0);
            default:
                printf("\nInvalid choice!\n");
        }
    }
    return 0;
}
