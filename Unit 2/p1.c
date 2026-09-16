#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push();
void pop();
void print();
void peek();
void peep();
void change();

int main()
{
    int choice;

    while (1)
    {
        printf("\n*** STACK OPERATIONS MENU ***\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print (Display)\n");
        printf("4. Peek\n");
        printf("5. Peep (Position-based)\n");
        printf("6. Change\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: print(); break;
            case 4: peek(); break;
            case 5: peep(); break;
            case 6: change(); break;
            case 7:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }
    }
    return 0;
}

void push()
{
    int value;
    if (top == MAX - 1)
    {
        printf("Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d successfully pushed onto the stack.\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! No elements to pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void print()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
    } else {
        printf("Current Stack elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("| %d |\n", stack[i]);
        }
        printf("-----\n");
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty! No top element.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

void peep()
{
    int position;
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Enter 1-based position from top (1 for Top, 2 for below Top, etc.): ");
    scanf("%d", &position);

    if (top - position + 1 < 0 || position <= 0)
    {
        printf("Invalid position! Out of stack range.\n");
    } else {
        printf("Element at position %d from top is: %d\n", position, stack[top - position + 1]);
    }
}

void change()
{
    int position, newValue;
    if (top == -1)
    {
        printf("Stack is empty! Cannot change values.\n");
        return;
    }

    printf("Enter 1-based position from top to change: ");
    scanf("%d", &position);

    if (top - position + 1 < 0 || position <= 0)
    {
        printf("Invalid position!\n");
    } else {
        printf("Enter the new value: ");
        scanf("%d", &newValue);
        stack[top - position + 1] = newValue;
        printf("Value at position %d successfully updated to %d.\n", position, newValue);
    }
}
