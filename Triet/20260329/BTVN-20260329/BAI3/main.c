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
            printf("sai dieu kien\n");
            break;
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

    } while (1);

    return 0;
}