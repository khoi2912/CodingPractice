// Bài 2: switch + while + break + continue
// Yêu cầu:
// Hiển thị menu:
// 1. Nhập số dương
// 2. tính tổng từ 1 đến n
// 0. Thoát

// Nếu nhập sai lựa chọn -> dùng continue
// Menu lặp lặp bằng while(1)
// Chọn 0 -> break

#include <stdio.h>
int main()
{
    int choice, n, sum;

    while (1)
    {
        printf("\n====MENU====\n");
        printf("1.Nhap so duong\n");
        printf("2.Tinh tong tu 1 den n\n");
        printf("0.Thoat\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                printf("Nhap so duong: ");
                scanf("%d", &n);
                if (n <= 0)
                {
                    printf("Vui long nhap so duong!\n");
                }
            } while (n <= 0);
            printf("Ban da nhap so duong: %d\n", n);
            break;

        case 2: // thiêus ngoặc {}
            int sum = 0;
            printf("Nhap n: ");
            scanf("%d", &n);
            if (n <= 0)
            {
                printf("Nhap ko hop le!\n");
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    sum += i;
                }
                printf("Tong tu 1 den %d la: %d\n", n, sum);
            }
            break;

        case 0:
            printf("Thoat chuong trinh.\n");
            break; // return 0;

        default:
            printf("Lua chon khong hop le! Vui long chon lai\n");
            continue;
        }
    }
    return 0;
}
