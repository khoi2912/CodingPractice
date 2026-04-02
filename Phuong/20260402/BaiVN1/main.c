#include <stdio.h>
int main()

{
    int n, choice;
    printf("Nhap so:");
    scanf("%d", &choice);
    do
    {
        printf("====MENU====\n");
        printf("1. In bang cuu chương\n");
        printf("2. Tinh tong cac so tu 1 den n\n");
        printf("0. Thoat\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so can in bang cuu chuong:");
            scanf("%d", &n);
            for (int i = 1; i <= 10; i++)
            {
                printf("%d x %d = %d\n", n, i, n * i);
            }
            break;

        case 2:
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += i;
            }
            printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
            break;

        case 0:
            printf("Thoat chuong trinh.\n");
            break;
            
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
        }

    } while (choice != 0);
    return 0;
}