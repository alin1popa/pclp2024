#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 1, index = 0;
    char *p = malloc(1);
    char c;

    scanf("%c", &c);
    while (c != 'q') {
        if (index >= capacity-1) {
            capacity *= 2;
            char *reallocated = realloc(p, capacity);
            if (reallocated == NULL) {
                printf("Error! :(\n");
                free(p);
                return 1;
            }
            p = reallocated;
            reallocated = NULL;
        }
        
        p[index++] = c;
        scanf("%c", &c);
    }
    p[index] = '\0';

    printf("Sirul citit este:\n%s\n", p);

    free(p);
    p=NULL;
    return 0;
}