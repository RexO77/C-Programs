// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
}
    for (int i = n; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
}
    return 0;
}