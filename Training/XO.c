#include <stdio.h>

int main() {
    int i, j, N;
    printf("Enter the size of the pattern: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            if (j == i || j == (N - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    int size = 7; // You can change the size to make the 'O' bigger or smaller
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
