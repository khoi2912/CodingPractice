// #include <stdio.h>

// int main() {
//     int n;
//     printf("Nhap so co 2 chu so: ");
//     scanf("%d", &n); // 36

//     int tens = n / 10; // 36 / 10 = 3   
//     int units = n % 10;   // 36 % 10 = 6

//     int reversed = units * 10 + tens; // 6 * 10 + 3 = 63 

//     printf("So dao nguoc: %d\n", reversed);

//     return 0;
// }

// Cách 2:
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so co 2 chu so: ");
    scanf("%d", &n); 

    if (n < 10 || n > 99) {
        printf("Vui long nhap so co 2 chu so!\n");
        return 1;
    }

    int tens = n / 10;  
    int units = n % 10;   

    int reversed = n + 9 * ( units - tens );
    
    printf("So dao nguoc: %d\n", reversed);

    return 0;
}