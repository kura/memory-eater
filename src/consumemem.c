#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MB 10485760
#define CONSUME 10 * MB

int main(int argc, char *argv[]) {
    void *b = NULL;
    int c = 0;
    while(1) {
        /* allocate xMB of memory */
        b = (void *) malloc(CONSUME);
        if (!b) {
            break;
        }

        /* consume our allocated 10MB */
        memset(b, 1, CONSUME);
        printf("%d iterations\n", ++c);
    }
    exit(0);
}

