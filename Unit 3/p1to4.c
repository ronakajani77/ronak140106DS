#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void create() {
    struct node *new_node, *ptr;
    int num;
    printf("Enter data: ");
    scanf("%d", &num);
    while (num != -1) {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        if (start == NULL) {
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
        }
        printf("Enter data: ");
        scanf("%d", &num);
    }
}

void display() {
    struct node *ptr = start;
    if (ptr == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void insert_beginning() {
    struct node *new_node;
    int val;
    printf("Enter value to insert at start: ");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = start;
    start = new_node;
}

void insert_end() {
    struct node *new_node, *ptr;
    int val;
    printf("Enter value to insert at end: ");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;
    if (start == NULL) {
        start = new_node;
        return;
    }
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
}

void insert_after() {
    struct node *new_node, *ptr;
    int val, val_after;
    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter value after which to insert: ");
    scanf("%d", &val_after);
    ptr = start;
    while (ptr != NULL && ptr->data != val_after)
        ptr = ptr->next;
    if (ptr == NULL) {
        printf("Node not found\n");
    } else {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = val;
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

void insert_before() {
    struct node *new_node, *ptr, *preptr = NULL;
    int val, val_before;
    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter value before which to insert: ");
    scanf("%d", &val_before);

    ptr = start;
    while (ptr != NULL && ptr->data != val_before) {
        preptr = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        printf("Node not found\n");
    } else if (ptr == start) {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = val;
        new_node->next = start;
        start = new_node;
    } else {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = val;
        new_node->next = ptr;
        preptr->next = new_node;
    }
}

void delete_first() {
    struct node *ptr;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    ptr = start;
    start = start->next;
    free(ptr);
    printf("First node deleted\n");
}

void delete_last() {
    struct node *ptr, *preptr = NULL;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    ptr = start;
    if (ptr->next == NULL) {
        start = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    printf("Last node deleted\n");
}

void delete_specific() {
    struct node *ptr, *preptr = NULL;
    int val;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Enter value to delete: ");
    scanf("%d", &val);
    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        printf("Node not found\n");
    } else if (ptr == start) {
        start = start->next;
        free(ptr);
    } else {
        preptr->next = ptr->next;
        free(ptr);
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Create\n2. Display\n3. Insert Start\n4. Insert End\n");
        printf("5. Insert After\n6. Insert Before\n7. Delete First\n");
        printf("8. Delete Last\n9. Delete Specific\n10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert_beginning(); break;
            case 4: insert_end(); break;
            case 5: insert_after(); break;
            case 6: insert_before(); break;
            case 7: delete_first(); break;
            case 8: delete_last(); break;
            case 9: delete_specific(); break;
            case 10: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
