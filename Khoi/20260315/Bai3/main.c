#include <stdio.h>

int main() {
    int n;
    printf("Nhap so co 2 chu so: ");
    scanf("%d", &n);

    int tens = n / 10;    
    int units = n % 10;   

    int reversed = units * 10 + tens;  

    printf("So dao nguoc: %d\n", reversed);

    return 0;
}