#include <stdio.h>

int main() {
    int n;

    printf("Nhap so hang n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {       // i = số hàng
        for (int j = 1; j <= i; j++) {   // j = số in trong hàng
            printf("%d ", j);
        }
        printf("\n"); 
    }

    return 0;
}