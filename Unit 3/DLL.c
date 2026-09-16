#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start = NULL;

void create()
{
    struct node *ptr, *preptr;
    int n, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        ptr = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &ptr->data);
        ptr->prev = NULL;
        ptr->next = NULL;
        if(start == NULL) {
            start = ptr;
        } else {
            preptr = start;
            while(preptr->next != NULL) {
                preptr = preptr->next;
            }
            preptr->next = ptr;
            ptr->prev = preptr;
        }
    }
}

void display()
{
    struct node *ptr;
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    ptr = start;
    printf("List elements: ");
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_start()
{
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->prev = NULL;
    ptr->next = start;
    if(start != NULL) {
        start->prev = ptr;
    }
    start = ptr;
}

void insert_end()
{
    struct node *ptr, *preptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    if(start == NULL) {
        ptr->prev = NULL;
        start = ptr;
        return;
    }
    preptr = start;
    while(preptr->next != NULL) {
        preptr = preptr->next;
    }
    preptr->next = ptr;
    ptr->prev = preptr;
}

void insert_after()
{
    struct node *ptr, *preptr;
    int val;
    printf("Enter value after which to insert: ");
    scanf("%d", &val);
    preptr = start;
    while(preptr != NULL && preptr->data != val) {
        preptr = preptr->next;
    }
    if(preptr == NULL) {
        printf("Node not found\n");
        return;
    }
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->next = preptr->next;
    ptr->prev = preptr;
    if(preptr->next != NULL) {
        preptr->next->prev = ptr;
    }
    preptr->next = ptr;
}

void insert_before()
{
    struct node *ptr, *preptr;
    int val;
    printf("Enter value before which to insert: ");
    scanf("%d", &val);
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    if(start->data == val) {
        insert_start();
        return;
    }
    preptr = start;
    while(preptr != NULL && preptr->data != val) {
        preptr = preptr->next;
    }
    if(preptr == NULL) {
        printf("Node not found\n");
        return;
    }
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->next = preptr;
    ptr->prev = preptr->prev;
    preptr->prev->next = ptr;
    preptr->prev = ptr;
}

int main()
{
    int choice;
    while(1) {
        printf("\n1. Create\n2. Display\n3. Insert Start\n4. Insert End\n5. Insert After\n6. Insert Before\n7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert_start();
                break;
            case 4:
                insert_end();
                break;
            case 5:
                insert_after();
                break;
            case 6:
                insert_before();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
