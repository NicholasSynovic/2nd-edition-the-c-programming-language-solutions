/* Experiment to find out what happens when printf's argument string contains \c where c is some charachter */

#include <stdio.h>

int main()  {
    printf("hello, world\b\b\b\b\btest\n");

    return 0;
}
