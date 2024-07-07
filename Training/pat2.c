#include <stdio.h>
// Pattern -2
int main() {
    int i, j, n = 6;
    printf("\n Pattern -1 \n");
    // Upper part of the heart
    for (i = n / 2; i <= n; i += 2) {
        for (j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the heart
    for (i = n; i >= 1; i--) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n Pattern -2 \n");
    int row = 6, col = 7;

	for(int r=0; r<row; r++){
		for(int c=0; c<col; c++){
			if(r==0 && c%3!=0){
				printf(" * ");
			}else if(r==1 && c%3==0){
				printf(" * ");
			}else if(r-c==2){
				printf(" * ");
			}else if(r+c==8){
				printf(" * ");
			}else{
				printf("   ");
			}
		}printf("\n");
	}

    return 0;
}
