#include <stdio.h>

// ---------- Pattern (A) ----------
void patternA_inner(int row, int col) {
    if (col > 3)
        return;
    printf("%d %d\t", row, col);
    patternA_inner(row, col + 1);
}

void patternA(int row) {
    if (row > 2)
        return;
    patternA_inner(row, 1);
    printf("\n");
    patternA(row + 1);
}

// ---------- Pattern (B) ----------
void patternB_inner(int row, int col) {
    if (col > 3)
        return;
    printf("%d %d\t", row, col);
    patternB_inner(row, col + 1);
}

void patternB(int row) {
    if (row > 3)
        return;
    patternB_inner(row, 1);
    printf("\n");
    patternB(row + 1);
}

// ---------- Pattern (C) ----------
void patternC_inner2(int a, int b, int c) {
    if (c > 3)
        return;
    printf("%d  ", a);
    patternC_inner2(a, b, c + 1);
}

void patternC_inner(int a, int b) {
    if (b > 3)
        return;
    patternC_inner2(a, b, 1);
    printf("\n");
    patternC_inner(a + 1, b + 1);
}

void patternC() {
    patternC_inner(1, 1);
}

// ---------- Pattern (D) ----------
void patternD_inner(int row, int col) {
    if (col > 2)
        return;
    printf("%d %d\t", 6 - row, col);
    patternD_inner(row, col + 1);
}

void patternD(int row) {
    if (row > 4)
        return;
    patternD_inner(row, 1);
    printf("\n");
    patternD(row + 1);
}

// ---------- MAIN ----------
int main() {
    printf("Pattern (A):\n");
    patternA(1);

    printf("\nPattern (B):\n");
    patternB(1);

    printf("\nPattern (C):\n");
    patternC();

    printf("\nPattern (D):\n");
    patternD(1);

    return 0;
}

