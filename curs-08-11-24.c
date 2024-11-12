#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // char s[100] = "Ana are mere, pere, portocale, banane";
    // // char s2[100];
    // // for (int i=0; i<99; i++) {
    // //     s2[i] = 'x';
    // // }
    // // s2[99] = '\0';
    // // printf("%s\n", s2);

    // char *s2 = strdup(s);

    // printf("%p\n", s);
    // printf("%c\n", *(s+1)); // char

    // strcpy(s2, s);
    // for (int i=0; i<100; i++) {
    //     printf("%c", s2[i]);
    // }

    // // char *p = strchr(s, 'e');
    // // printf("%p\n", p);
    // // printf("%s\n", p);
    // // printf("%ld\n", p-s);

    // int count = 0;
    // for (int i=0; i<(int)strlen(s); i++) {
    //     if (s[i] == 'e') {
    //         count++;
    //     }
    // }
    // printf("e: %d\n", count);

    // char *p = s;
    // while ((p=strchr(p, 'a'))) {
    //     printf("%ld\n", p-s);
    //     p++;
    // }

    // char *token = strtok(s, ", ");
    // while (token != NULL) {
    //     printf("%s\n", token);
    //     token = strtok(NULL, ", ");
    // }
    // // printf("%s\n", s);
    // // for (int i=0; i<100; i++) {
    // //     printf("%d:%d(%c)\n", i, s[i], s[i]);
    // // }
    // // printf("\n");

    // strcmp("Ana", "Ana");

    // int *p = malloc(sizeof(int));
    // *p = 5;
    // printf("%d\n", *p);

    
    // int *p2 = malloc(1000000000);
    // if (!p2) {
    //     printf("Insufficient memory! Exiting gracefully...\n");
    //     return 0;
    // }
    // printf("%p\n", p2);
    // p2[0] = 5;
    
    // free(p2);
    // p2 = NULL;

    // if (p2)
    // p2[0] = 6;
    // printf("%p\n", p2);

    // int n, m;
    // scanf("%d%d", &n, &m);

    // // int *p = malloc(sizeof(int) * n);
    // // // p[0] // *(p+0) // *(0+p) // 0[p]
    // // for (int i=0; i<n; i++) {
    // //     scanf("%d", &p[i]);
    // // }
    // // for (int i=0; i<n; i++) {
    // //     printf("%d ", p[i]);
    // // }   
    // // printf("\n");

    // int *p = malloc(sizeof(int) * n * m);
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         scanf("%d", &(p[i*m+j]));
    //     }
    // }

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         printf("%d ", p[i*m+j]);
    //     }
    //     printf("\n");
    // }

    // a[i][j]

    // int *p = malloc(123);
    // free(p)
    // p = NULL;

    int n;
    scanf("%d", &n);

    int **a = malloc(n * sizeof(int*));
    if (!a) {
        printf("Error\n");
        return 1;
    }
    for (int i=0; i<n; i++) {
        a[i] = malloc(i+1 * sizeof(int));
        if (!a[i]) {
            printf("Error\n");
            for (int j=0; j<i; j++) {
                free(a[j]);
            }
            free(a);
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            scanf("%d", &(a[i][j]));
        }
    }
    printf("\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<n; i++) {
        free(a[i]);
    }
    free(a);
    a = NULL;
    return 0;
}