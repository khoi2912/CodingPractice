#include <stdio.h>

int main() {
    int choice;
    int n, i;
    int result = 1;

    printf("=== MENU ===\n");
    printf("1. Calculate factorial\n");
    printf("2. Exit\n");
    printf("Choose: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);
            do
            {
             printf("Nhaplai so nguyen duong\n");
             scanf("%d", &n);
             if (n <= 0)
             {
                 printf("So khong hop le, vui long nhap lai!\n");
             }
             } while (n <= 0);
            for (i = 1; i <= n; i++) {
                result *= i;
            }

            printf("Factorial of %d is: %d\n", n, result);
            break;

        case 2:
            printf("Exit program\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
// BUG 
// 現象： Giai thừa của số dương bất kỳ đều cho kết quả bằng 0/ Nhập số âm vẫn chạy và in ra kết quả bằng 0, ko báo lỗi
// 概要：Chương trình tính giai thừa nhưng output luôn là 0 dù nhập số nào > 0./ không có định nghĩa cho số nguyên âm, chương trình ko kiểm tra 
// 再現手順：Chạy chương trình, Chọn 1 (Calculate factorial), Nhập n=5, Quan sát kết quả in ra/ nhập n=0/ nhập thêm thêm số âm
// 実際の結果：Factorial of 5 is: 0/ fac âm là 1
// 期待結果：Factorial of 5 is: 120/ Thông báo lỗi: Lỗi: Không có giai thừa cho số âm
// 発生頻度：100% (luôn xảy ra với mọi n > 0)/ 100%/ 
// 原因： Biến result được khởi tạo = 0. Trong vòng lặp result *= i, phép nhân với 0 luôn cho kết quả 0./ for (i = 1; i <= 0; i++) không chạy, result giữ nguyên giá trị khởi tạo = 0.
// 影響範囲：Toàn bộ chức năng tính giai thừa cho số nguyên dương./ trường hợp n=0/ trường hợp n là số âm/
// 対応方法：Đổi khởi tạo int result = 0; thành int result = 1;/ thêm kiểm tra

