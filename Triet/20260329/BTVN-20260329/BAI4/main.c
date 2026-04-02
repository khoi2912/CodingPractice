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
int main(){
   int n;
   int choice;
   printf("Nhap so n: ");
   scanf("%d", &n);
do 
{
    printf("\n===MENU===\n");
    printf("1. DEM SO CHAN TU 1-n\n");
    printf("2. DEM SO LE TU 1-n\n");
    printf("3. TINH TONG SO CHIA HET CHO 3\n");
    printf("0. THOAT\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

if (choice == 0) {   //4. Chọn 0 -> break
    printf("KET THUC");
    break;
}

if (choice == 1) {   //1. Đếm số chẵn từ 1 -> n
    printf("Nhap so n: ");
    scanf("%d", &n);

    if (n <=0){  //3. Nếu n <= 0 -> continue
            printf("So khong hop le\n");
            continue;
    }
    int countc = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            countc++;
        }
    }
    printf("DEM SO CHAN: %d\n", n, countc);
}

else if (choice == 2) {   //2. Đếm số lẻ từ 1 -> n
    if (n <=0){ //3. Nếu n <= 0 -> continue
            printf("So khong hop le\n");
            continue;
    }
    int countl = 0;
    for (int j = 1; j <= n; j++) {
        if (j % 3 == 0) {
            countl++;
        }
    }
    printf("DEM SO LE: %d\n", n, countl);
}else {
    printf("Lua chon khong hop le\n");
    continue; // 5. Nếu nhập sai lựa chọn -> continue
}

}while(1);
return 0;
}