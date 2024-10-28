#include <stdio.h>

int main() {
    int v[100];

    // v[5] = 10;

    // for (int i = 0; i < 100; i++) {
    //     v[i] = 0;
    // }

    // for (int i = 0; i < 100; i++) {
    //     printf("%d ", v[i]);
    // }

    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // for (int i = 0; i < n; i++) {
    //     printf("%d ", v[i]);
    // }

    // printf("%d", i);

    // for (int i = 0; i < n; i++) {
    //     if (v[i] % 2 == 0) {
    //         printf("%d ", v[i]);
    //     }
    // }

    // int searched;
    // scanf("%d", &searched);
    // int found;

    // found = 0;
    // for (int i = 0; i < n && !found; i++) {
    //     if (v[i] == searched) {
    //         printf("Am gasit %d pe pozitia %d\n", searched, i);
    //         // break;
    //         found = 1;
    //     }
    // }

    // if (n == 0) {
    //     printf("Vectorul este gol - nu exista maxim\n");
    //     return 0;
    // } else {
    //     int max=v[0];
    //     for (int i=0; i<n; i++) {
    //         if (v[i] > max) {
    //             max = v[i];
    //         }
    //     }
    //     printf("max = %d\n", max);
    // }

    // // sort ascending
    // for (int i=0; i<n-1; i++) {
    //     for (int j=i+1; j<n; j++) {
    //         if (v[i] > v[j]) {
    //             int aux = v[i];
    //             v[i] = v[j];
    //             v[j] = aux;
    //         }
    //     }
    // }

    // for (int i=0; i<n; i++) {
    //     printf("%d ", v[i]);
    // }

    int insertPosition, insertValue;
    scanf("%d %d", &insertPosition, &insertValue);

    for (int i=n; i>insertPosition; i--) {
        v[i] = v[i-1];
    }

    v[insertPosition] = insertValue;

    int deletePosition;
    for (int i= deletePosition+1; i <= n-2; i++) {
        v[i-1] = v[i];
        // v[i] = v[i+1];
    }

    
}