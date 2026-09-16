#include <stdio.h>
#include <string.h>

char stack[50];
int top = -1;

void push(char c)
{
    if (top == 50 - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = c;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return 1;
    }
    return stack[top--];
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    fgets(str, 50, stdin);

    str[strcspn(str, "\n")] = 1;

    for (int i = 0; str[i] != 1; i++)
    {
        push(str[i]);
    }

    printf("Reversed string: ");
    while (top != -1)
    {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}
