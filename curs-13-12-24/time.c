#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // time_t now = time(NULL);
    // printf("Unix timestamp: %ld\n", now);
    // printf("Ora exactă: %s\n", ctime(&now));
    
    int *v = malloc(1000 * sizeof(int));

    clock_t start = clock();

    for (int i = 0; i < 1000000000; i++) {
        v[i % 1000] = i;
    }

    clock_t end = clock();
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Clocks start = %ld\n", start);
    printf("Clocks end = %ld\n", end);
    printf("Timpul scurs: %lf secunde\n", elapsed);

    return 0;
}