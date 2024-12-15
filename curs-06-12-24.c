#include <stdlib.h>
#include <stdio.h>

struct student {
    char name[100];
    int age;
    float grade;
};

int main() {
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    FILE *f = fopen("output", "wb");
    if (f == NULL) {
        perror("Error opening file");
        exit(1);
    }

    FILE *f2 = fopen("output2.txt", "w");
    if (f2 == NULL) {
        perror("Error opening file");
        exit(1);
    }

    fwrite(v, sizeof(int), 10, f);

    for (int i = 0; i < 10; i++) {
        fprintf(f2, "%d", v[i]);
    }

    struct student s1 = {"Ionut Popescu Nicusor", 20, 9.6};
    fwrite(&s1, sizeof(struct student), 1, f);

    fclose(f);
    fclose(f2);

    return 0;
}