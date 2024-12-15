#include <stdio.h>

#pragma pack(1)
struct bmp_header {
    char signature[2];
    // fara padding 2 !!! 
    int size;
    int reserved;
    int offset;
    int header_size;
    int image_width;
    int image_height;
};
#pragma pack()

int main() {
    FILE *f = fopen("input.bmp", "rb");
    struct bmp_header my_header;
    fread(&my_header, sizeof(struct bmp_header), 1, f);

    printf("Signature: %c%c\n", my_header.signature[0], my_header.signature[1]);
    printf("Size: %d\n", my_header.size);
    printf("Reserved: %d\n", my_header.reserved);
    printf("Offset: %d\n", my_header.offset);
    printf("Header size: %d\n", my_header.header_size);
    printf("Image width: %d\n", my_header.image_width);
    printf("Image height: %d\n", my_header.image_height);
}