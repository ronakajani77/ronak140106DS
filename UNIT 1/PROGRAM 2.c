#include<stdio.h>
#include<conio.h>
    void main()
    {
        int a[10];
        int i;
        printf("enter 10 value");

            for(i=0;i<=9;i++)
            {
                scanf("%d",&a[i]);
            }

            printf("10 value are \n");
            for(i=0;i<=9;i++)
            {
                printf("%d\n",&a[i]);
            }
            printf("enter the value want to serch");
             scanf("%d",&s);
             for(i=0;i<=9;i++)
             {
                 if(s==a[i])
                 {
                     break;
                 }
             }
                if(i==10)
                {
                    printf("value not found")
                }
                else
                {
                  printf("value found at location %d",i+1);
                }
    getch ();
    }

