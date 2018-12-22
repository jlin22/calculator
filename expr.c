#include <stdio.h>
#include <ctype.h>
#include "header.h"

int main(int argc, char *argv[]) {
    int i;
    for (i = 1; i < argc; i++) {
        printf("%c %c\n", **(argv + i), '-');
        if (isnum(*(argv + i)))
            push_num_str(*(argv + i));
        else if (isop(**(argv + i)))
            perform_op(**(argv + i));
    }    
    iterate();
}


