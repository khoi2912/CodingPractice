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
int main(){
   int n;
   int choice;
   printf("Nhap so n: ");
   scanf("%d", &n);
do 
{
    printf("\n===MENU===\n");
    printf("1. NHAP SO DUONG\n");
    printf("2. TONG TU 1 DEN n\n");
    printf("0. THOAT\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

    if (choice ==0){
        printf("KET THUC");
        break;
    }

    if (choice ==1){
        printf("Nhap so duong: ");
        scanf("%d", &n);
        
        if (n <=0){
            printf("So khong hop le\n");
            continue;
        }

    }else if (choice ==2){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i;
        }
            printf("Tong tu 1 den %d: %d\n", n,sum);
    }else {
        printf("Lua chon khong hop le\n");
        continue;
    }
}while(1);
return 0;
}