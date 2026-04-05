// Bài 4:

// Viết chương trình:
// ===== Menu =====
// 1. Đếm số chẵn từ 1 -> n
// 2. Đếm số lẻ từ 1 -> n
// 3. Tính tổng số chia hết cho 3
// 0. Thoát

// Yêu cầu:
// 1. Menu dùng do-while
// 2. Dùng for xử lý tính toán
// 3. Nếu n <= 0 -> continue
// 4. Chọn 0 -> break
// 5. Nếu nhập sai lựa chọn -> continue
#include <stdio.h>
int main()
{
    int n;
    int choice;
    printf("Nhap n: \n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Nhap khong hop le! Vui long nhap lai.\n");
        return 1;
    }
    do
    {
        printf("====MENU===\n");
        printf("1.Dem so le\n");
        printf("2.Dem so chan\n");
        printf("3.Tong chia het cho 3\n");
        printf("0.Thoat\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int count1 = 0;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 != 0)
                {
                    count++;
                }
            }
            printf("So le tu 1 den %d la: %d\n", n, count1);
            break;
        case 2:
            int count2 = 0;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    count2++;
                }
            }
            printf("So chan tu 1 den %d la: %d\n", n, count2);
            break;
        case 3:
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                if (i % 3 == 0)
                {
                    sum += i;
                }
            }
            printf("Tong cac so chia het cho 3 tu 1 den %d la: %d\n", n, sum);
            break;
        }
        case 0:
            printf("Thoat chuong trinh\n");
            break;

        default:
            printf("Khong co trong MENU. Vui long chon lai.\n");
            break;
        }

    } while (choice != 0);

    return 0;
}
