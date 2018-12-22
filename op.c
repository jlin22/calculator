#include <string.h>

int isop(char *s) {
    return !strcmp(s, "+") || !strcmp(s, "-") || !strcmp(s, "*") || !strcmp(s, "/");
}

void perform_op(char *s) {
    int temp = 0;
    switch (*s) {
        case '+':
            push(pop() + pop()); 
            break; 
        case '-':
            temp = pop();
            push(pop() - pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '/':
            temp = pop();
            push(pop() / temp);        
            break;
        default:
            break;
    }
}


