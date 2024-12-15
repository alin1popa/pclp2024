#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void myPrintf(const char *format, ...) {
    va_list myArgs;
    va_start(myArgs, format);

    char *p = format;
    while (*p != '\0') {
        if (*p == '%') {
            p++;
            switch (*p) {
                case 'd': {
                    int i = va_arg(myArgs, int);
                    printf("[numarul magic este %d]", i);
                    break;
                }
                case 'f': {
                    double d = va_arg(myArgs, double);
                    printf("%f", d);
                    break;
                }
                case 's': {
                    char *s = va_arg(myArgs, char *);
                    printf("%s", s);
                    break;
                }
                default:
                    printf("Unknown format specifier %c\n", *p);
            }
        } else {
            printf("%c", *p);
        }
        p++;
    }

    va_end(myArgs);
}

int getMax(int count, ...) {
    va_list myArgs;
    va_start(myArgs, count);

    int max = va_arg(myArgs, int);
    for (int i = 1; i < count; i++) {
        int current = va_arg(myArgs, int);
        if (current > max) {
            max = current;
        }
    }

    va_end(myArgs);
    return max;
}

int main() {
    myPrintf("Ana are %d mere, %f portocale, si %f la %s\n", 10, 3.14, 9.5, "PCLP");
}