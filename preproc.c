#include <stdio.h>
#include <inttypes.h>

#define BYTE uint8_t

void bin_print(BYTE i) {
    // Number of bis in an integer.
    int j = sizeof(BYTE) * 8;

    // Temporary variable.
    int k;

    // Loop over the number of bits in i, left to right.
    for (j-- ; j >= 0; j--) {
        // Pick out the j^th bit of i.
        k = ((1 << j) & i) ? 1 : 0;
        // Print k.
        printf("%d", k);
    }
}

int main(int argc, char *argv[]) {
    BYTE b;

    FILE *f;
    f = fopen(argv[1], "r");

    size_t nobytes;

    nobytes = fread(&b, 1, 1, f);
    while (nobytes) {
        bin_print(b);
        nobytes = fread(&b, 1, 1, f);
    }
    fclose(f);
    printf("\n");


    return 0;
}