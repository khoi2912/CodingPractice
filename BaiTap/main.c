// Bài 2: do-while + break + continue

// 🎯 Yêu cầu

// Viết chương trình hiển thị menu:
// 	1.	Nhập số dương
// 	2.	Tính bình phương
// 	0.	Thoát

// 	•	Nếu chọn sai (khác 0, 1, 2) → thông báo và lặp lại (continue).
// 	•	Nếu chọn 0 → thoát chương trình (break).
// 	•	Menu phải hiển thị ít nhất một lần (do-while).


#include <stdio.h>

int main() {
    int choice, n = 0;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Nhap so duong\n");
        printf("2. Tinh binh phuong\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        if (choice == 1) {
            printf("Nhap so duong: ");
            scanf("%d", &n);

            if (n <= 0) {
                printf("So khong hop le\n");
                continue;
            }
        }else if (choice ==  2) {
            if (n <= 0) {
                printf("Vui long nhap so duong truoc!\n");
                continue;
            }
            printf("Binh phuong: %d\n", n * n);
        }else {
            printf("Lua chon khong hop le! \n");
            continue;
        }
    } while (1);
    
    printf("Chuong trinh ket thuc!!!\n");
    return 0;
}