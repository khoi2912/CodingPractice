
// // Kiểm tra số đặc biệt
// // Yêu cầu:
// // Viết chương trình có menu:
// // 1. Kiểm tra số chẵn hay lẻ
// // 2. Kiểm tra số nguyên tố
// // 3. Kiểm tra số đối xứng
// // 0. Thoát

// // ví dụ ở 3 là 121, 151,545, 595.

// #include <stdio.h>
// int main(){
//       int n;
//       int a,b;
//       int choice;
//       printf("Nhap so n: ");
//       scanf("%d", &n);
// do 
// {
//     printf("\n===MENU===\n");
//     printf("1. KIEM TRA SO CHAN HAY LE\n");
//     printf("2. KIEM TRA SO NGUYEN TO\n");
//     printf("3. KIEM TRA SO DOI XUNG\n");
//     printf("0. THOAT\n");
//     printf("Nhap lua chon: ");
//     scanf("%d", &choice);

// if (choice == 0) {   //4. Chọn 0 -> break
//     printf("KET THUC");
//     break;
// }

// if (choice == 1) {   //KIEM TRA SO CHAN HAY LE

//     if (n % 2 == 0) {
//         printf("%d la so chan\n", n);
//     } else {
//         printf("%d la so le\n", n);
//     }
//     break;
// }

// if (choice == 2) {  //Kiem tra so nguyen to 
//     int count = 0; 
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//         }
//     }
//     if (count <=2){ 
//         printf("So %d la so nguyen to\n",n);
//     }else{
//         printf("So %d  khong la so nguyen to\n",n);
//     }
//     break;
//     }
  
// if (choice == 3){// kiem tra so doi xung
//     a = n / 100;// so dau
//     b = n % 10;// so cuoi
//     if (a == b) {
//         printf("So doi xung\n");
//     } else {
//         printf("So khong doi xung\n");
//     }
//     break;
// }

// }while(1);

// return 0;
// }
