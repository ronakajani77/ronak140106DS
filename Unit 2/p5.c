#include <stdio.h>
int stack[100];
int top = -1;
void push(int value){
    top++;
    stack[top] = value;
}
int pop(){
    int value = stack[top];
    top--;
    return value;
}
int main(){
    int base, exponent;
    int result = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for (int i = 0; i < exponent; i++){
        push(base);
    }
    while (top != -1){
        result = result * pop();
    }
    printf("Result: %d\n", result);
    return 0;
}
