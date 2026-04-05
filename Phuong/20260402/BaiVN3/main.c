#include <stdio.h>
int main()
{
    int n;
    int m;
    char choice;
    printf("Nhap so n:");
    scanf("%d", &n);
    printf("Nhap so m:");
    scanf("%d", &m);
    do
    {
        printf("====MENU====\n");
        printf("+.Cong\n");
        printf("-.Tru\n");
        printf("x.Nhan\n");
        printf("/.Chia\n");
        printf("q.Thoat\n");
        printf("Nhap lua chon:");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '+':
            printf("Tong %d va %d la: %d\n", n, m, n + m);
            break;
        case '-':
            printf("Hieu %d va %d la: %d\n", n, m, n - m);
            break;
        case 'x':
            printf("Tich %d va %d la: %d\n", n, m, n * m);
            break;
        case '/':
            if (m != 0)
            {
                printf("Thuong %d va %d la: %.2f\n", n, m, (float)n / m);
            }
            else
            {
                printf("Khong the chia cho 0!\n");
            }
            break;
        case 'q':
            printf("Thoat chuong trinh.\n");
            return 0;
        default:
            printf("Lua chon khong hop le, vui long chon lai.\n");
            continue;
        }
    } while (1);
    return 0;
}