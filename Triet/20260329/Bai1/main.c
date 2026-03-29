
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    while (1) {  
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);

        if (n == 0) {
            break;  
        }
        if (n < 0) {
            continue;  
        }
        sum+= n;  
    }

    printf("Tong cac so duong = %d\n", sum);

    return 0;
}