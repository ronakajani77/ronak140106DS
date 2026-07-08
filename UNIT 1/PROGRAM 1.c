#include<stdio.h>
#include<conio.h>

void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("address of a is %d\n",p);
    printf("value of a is %d\n",*p);
    getch();

    }
