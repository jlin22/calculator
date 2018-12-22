#include "stack.h"

int isnum(char *s) {
    if (!*s)
        return 1;
    return (*s >= '0' && *s <= '9') && isnum(++s);
}

int strtoint(char *s) {
    int val = 0;
    while (*s != '\0')
        val = val * 10 + (*s++ - '0');
    return val; 
}

void push_num_str(char *s) {
    push(strtoint(s));
}
