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

// Cách 2:
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Nhap so co 2 chu so: ");
//     scanf("%d", &n);

//     if (n < 10 || n > 99) {
//         printf("Vui long nhap so co 2 chu so!\n");
//         return 1;
//     }

//     int tens = n / 10;   
//     int units = n % 10;   

//     int diff = units - tens;      
//     int sum = tens + units;       
//     int delta = diff * sum;       
//     int reversed = n + delta;     

//     printf("So dao nguoc: %d\n", reversed);

//     return 0;
// }