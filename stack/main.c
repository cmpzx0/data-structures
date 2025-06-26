#include <stdio.h>
#include "stack.h"

int main() {
    Stack* stack = create_stack(10);

    push(stack, 42);
    push(stack, 1337);
    push(stack, 9001);

    while (!is_empty(stack)) {
        printf("Top: %d\n", peek(stack));
        printf("Popped: %d\n", pop(stack));
    }

    free_stack(stack);
    return 0;
}
