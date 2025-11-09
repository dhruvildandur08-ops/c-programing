#include <stdio.h>


void patternA(int i, int j) {
    if (i > 5 || j < 1)
        return;

    printf("%d %d\n", i, j);
    patternA(i + 1, j - 1);
}


void patternB(int i, int j) {
    if (i > 3 || j < 3)
        return;

    printf("%d %d\n", i, j);
    printf("%d %d\n", i, j);
    patternB(i + 1, j - 1);
}

int main() {
    printf("Pattern (A):\n");
    patternA(1, 5);

    printf("\nPattern (B):\n");
    patternB(1, 5);

}
