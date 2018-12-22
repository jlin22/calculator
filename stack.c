#include <stdio.h>

#define MAXLEN 1000

static int stack[MAXLEN];
static int ind = 0;

void push(int x);
int pop(void);
void iterate(void);

void push(int x) {
    *(stack + ind++) = x;
}

int pop(void) {
    return *(stack + --ind);
}

void iterate() {
    for (int i = 0; i < ind; i++)
        printf("%d%s", *(stack+i), (i == ind - 1) ? "\n" : " ");
}

void get_val(int *x) {
    if (ind != 1)
        printf("Error: not only one element on the stack\n");
    else
        *x = *stack;
}
