#include <stdio.h>

int main()
{
    int stack[100];
    int top=-1,n,i,fact=1;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        stack[++top]=i;

    while(top!=-1)
        fact*=stack[top--];

    printf("Factorial = %d",fact);

    return 0;
}
