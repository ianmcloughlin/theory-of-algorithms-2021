#include <stdio.h>

void bit_print(int i) {
    for (int j = 0; j < 8; j++)
        printf("%d", ((1 << j) & i) ? 1 : 0);
}

int main(int argc, char *argv[]) {
    
    int i = 1;

    for (int j = 0; j < 8; j++){
        bit_print(i << j);
        printf("\n");
    }
    
    return 0;
}
