#include <stdio.h>

// Ví dụ:
// Nhập Nhập1 số nguyên từ 0 -> 9
// Nếu số chẵn -> in ra "Số chẵn"
// Nếu số lẻ -> in ra "Số lẻ"
// Nếu ngoài 0 -> 9 in ra "không hợp lệ"

int main(){
    
    int n;

    printf(" Nhap so tu 0 -> 100");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Không hợp lệ\n");
        return 1;
    }

    switch (n % 2)
    {
    case 0:
        printf(" Số chẵn\n");
        break;
    
    case 1:
        printf(" Số lẻ\n");
        break;
    return 0;
    }
}
