#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack1[MAX];
int top = -1;

void push(int value){

    if(top == MAX - 1){
        printf("Error: Stack Overflow!\n");
    }
    else{
        top++;
        stack1[top] = value;
    }
}
int pop(){

    if(top == -1){
        printf("Error: Stack Underflow!\n");
        return -1;
    }
    top--;
    return stack1[top+1];
}
void print1(int a[]){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements: ");
        for(int i = top; i >= 0; i--){
            printf("%d ", stack1[i]);
        }
        printf("\n");
    }
}
int main(){

    int value, n;
    printf("Enter Value: ");
    scanf("%d", &n);
    for(int i = 0; n >= 0; i++){
        (n % 2 == 0) ? value = 0: value = 1;
        push(value);
        if(n / 2 == 1 || n/2 == 0){
            value = 1;
            push(value);
        }
    }

    return 0;
}
