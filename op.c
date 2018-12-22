#include <string.h>

int isop(char s) {
    return s == '+' || s == '-' || s == '*' || s == '/';
}

void perform_op(char s) {
    int temp;
    switch (s) {
        case '+':
            push(pop() + pop()); 
            break; 
        case '*':
            pop();
            pop();
            break;
        case '/':
            temp = pop();
            push(pop() / temp);
            break;
        default:
            break;
    }
}


