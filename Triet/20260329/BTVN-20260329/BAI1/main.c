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
int main(){
   int n;
   int choice;
   printf("Nhap so n: ");
   scanf("%d", &n);
do 
{
    printf("\n===MENU===\n");
    printf("1. IN BANG CUU CHUONG\n");
    printf("2. TONG TU 1 DEN n\n");
    printf("0. THOAT\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for(int i = 1; i <= 10; i++){
                printf("%d x %d = %d\n", n, i, n * i);
        }
        break;
    case 2:
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i;
            printf("Tong tu 1 den %d: %d\n", n,sum);
        }
        break;
    case 0:
            printf("KET THUC\n");
        return 0;
    default:
            printf("KHONG HOP LE\n");
        break;
    }
}while(1);
return 0;
}