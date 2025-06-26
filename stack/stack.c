#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


Stack* create_stack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->data = (int*)malloc(capacity * sizeof(int));
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}

void push(Stack* stack, int value) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack->data[++stack->top] = value;
}

int pop(Stack* stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->data[stack->top--];
}

int peek(Stack* stack) {
    if(stack->top == -1) return -1;
    return stack->data[stack->top];
}

int is_empty(Stack* stack) {
    return stack->top == -1;
}

void free_stack(Stack* stack) {
    free(stack->data);
    free(stack);
}
