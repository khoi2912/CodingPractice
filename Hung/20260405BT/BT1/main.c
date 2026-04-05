// Bài 1: switch + for + break
// Yêu cầu :
// a. Nhập 1 số n
// b. Hiển thị menu:
// 1. in bảng cửu chương
// 2. tính tổng từ 1 đến n
// 0. Thoát

// Nếu chọn 1 -> dùng for in bảng cửu chương của n
// Nếu chọn 2 -> dùng for tính tổng
// Nếu chọn 0 -> kết thúc

#include <stdio.h>

int main()
{
    int n, choice;

    printf("Nhap so n: ");
    scanf("%d", &n);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1.In bang cuu chuong\n");
        printf("2.Tinh tong tu 1 den n\n");
        printf("0.Thoat\n");
        printf("CHON: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Bang cuu chuong cua %d:\n", n);
            for (int i = 1; i <= 10; i++)
            {
                printf("%d * %d = %d\n", n, i, n * i);
            }
            break;
        }
        case 2:
        {
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += i;
            }
            printf("Tong tu 1 den %d la: %d\n", n, sum);
            break;
        }
        case 0:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}
