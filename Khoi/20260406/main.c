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


// Chú ý ở switch-case :
// Case 1 của mình hiện tại không có khai báo biến thì không cần {}
// Case 2 của mình hiện tại có khai báo biến thì cần {}

// break hiện tại mà mọi người đang thấy là switch case.
// break trước mình học là nằm ở do-while nằm ở trong if.

// #include <stdio.h>
// int main(){
//     int n;
//     int choice;
//     printf("Nhap so n: ");
//     scanf("%d", &n);  
//     do 
//     {
//         if (n < 2 || n > 9){
//             printf(" Nhap lai n: \n");
//             scanf("%d", &n);
//             continue;
//         }
//         printf("\n===MENU===\n");
//         printf("1. IN BANG CUU CHUONG\n");
//         printf("2. TONG TU 1 DEN n\n");
//         printf("0. THOAT\n");
//         printf("Nhap lua chon: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             for(int i = 1; i <= 10; i++){
//                     printf("%d x %d = %d\n", n, i, n * i); 
//             }
//             break;
//         case 2:{
//             int sum = 0;
//             for(int i = 1; i <= n; i++){ 
//                 sum += i; 
//             }   
//             printf("Tong tu 1 den %d: %d\n", n, sum);
//             break;
//         }
//         case 0:
//             printf("KET THUC\n");
//             break;
            
//         default:
//             printf("KHONG HOP LE\n");
//             break;
//         }

//     }while(1);


//     return 0;
// }


/// bai 3
// Bài 3: switch + do-while 
// Yêu cầu:
// Viết chương trình tính toán
// + : Cộng
// - : Trừ
// * : Nhân
// / : Chia
// q : Thoát

// Nhập 2 số và ký tự phép toán
// Lặp lại menu bằng do-while
// Nếu nhập sai phép toán -> continue
// Nếu nhập q -> break

// Típ dễ nhớ đối với switchcase:
// break -> thoát switch
// continue -> quay lại vòng lặp

#include <stdio.h>

int main() {
    float m;
    float n;
    char a;

    printf("Nhap so m: ");
    scanf("%f", &m);
    printf("Nhap so n: ");
    scanf("%f", &n);

    do {
        printf("\n===MENU===\n");
        printf("+. Cộng \n");
        printf("-. Trừ \n");
        printf("*. Nhân \n");
        printf("/. Chia\n");
        printf("q. Thoat \n");
        printf("Nhap lua chon: ");
        scanf(" %c", &a);  

        if (a == 'q') {
            printf("Thoat \n");
            break;
        }

        if (n == 0) {
            printf("sai dieu kien, nhập lại n\n");
            scanf("%f", &n);
            continue;
        }

        switch (a) {
            case '+':
                printf("Ket qua: %.2f\n", m + n);
                break;

            case '-':
                printf("Ket qua: %.2f\n", m - n);
                break;

            case '*':
                printf("Ket qua: %.2f\n", m * n);
                break;

            case '/':
                printf("Ket qua: %.2f\n", m / n);
                break;

            default:
                printf("KHONG HOP LE\n");
                continue;
        }
        printf("SSSSSSSSSSSSSSSSS\n");

    } while (1);

    return 0;
}