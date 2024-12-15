#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("No arguments\n");
        printf("Usage: %s [--float] [--file file.txt] A B\n", argv[0]);
        printf("This program adds two numbers\n");
        return 0;
    }

    if (!strcmp(argv[1], "--help")) {
        printf("Usage: %s [--float] [--file file.txt] A B\n", argv[0]);
        printf("This program adds two numbers\n");
        return 0;
    }

    int i = 1;
    int flag_float = 0;
    FILE *f = stdout;
    while (i < argc) {
        if (!strcmp(argv[i], "--float")) {
            flag_float = 1;
            printf("Float mode\n");
        } else if (!strcmp(argv[i], "--file")) {
            if (i + 1 < argc) {
                printf("File mode: %s\n", argv[i + 1]);
                i++;
                f = fopen(argv[i], "w");
            } else {
                printf("Error: missing file name\n");
            }
        } else {
            if (flag_float) {
                float a = atof(argv[i]);
                i++;
                float b = atof(argv[i]);
                fprintf(f, "Sum: %f\n", a + b);
            } else {
                int a = atoi(argv[i]);
                i++;
                int b = atoi(argv[i]);
                fprintf(f, "Sum: %d\n", a + b);
            }
        }
        i++;
    }

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
