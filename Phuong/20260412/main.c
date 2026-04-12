// Viết chương trình có menu:
//  1. Kiểm tra số chẵn hay lẻ
//  2. Kiểm tra số nguyên tố
//  3. Kiểm tra số đối xứng
//  0. Thoát

// ví dụ ở 3 là 121, 151,545, 595.
#include <stdio.h>

int main()
{
    int choice, n, sogoc, sodao;
    do
    {
        printf("Nhap so nguyen duong co 3 chu so: ");
        scanf("%d", &n);
        if (n < 100 || n > 999)
        {
            printf("Vui long nhap so nguyen duong co 3 chu so (100-999)!\n");
        }
    } while (n < 100 || n > 999);
    do
    {
        printf("\n==MENU==\n");
        printf("1. Kiem tra so chan hay le\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so doi xung\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
        {

            if (n % 2 == 0)
            {
                printf("So %d la so chan\n", n);
            }
            else
            {
                printf("So %d la so le\n", n);
            }
            break;
        }
        case 2:
        {
            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf("So %d la so nguyen to\n", n);
            }
            else
            {
                printf("So %d khong phai la so nguyen to\n", n);
            }
            break;
        }
        case 3:
        {
            sogoc = n;
            sodao = 0;
            while (sogoc > 0)
            {
                sodao = sodao * 10 + sogoc % 10;
                sogoc /= 10;
            }
            if (n == sodao)
            {
                printf("So %d la so doi xung\n", n);
            }
            else
            {
                printf("So %d khong phai la so doi xung\n", n);
            }
            break;
        }
        case 0:
        {
            printf("Tam biet!\n");
            break;
        }
        default:
        {
            printf("Lua chon khong hop le! Vui long chon lai.\n");
            break;
        }
        }
    } while (choice != 0);

    return 0;
}