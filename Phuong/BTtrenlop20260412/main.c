//===== MENU =====
// 1. Nhap danh sach n so
// 2. Hien thi cac so chan
// 3. Dem so nguyen to trong danh sach
// 4. Tinh tong cac so chia het cho 3 nhung khong chia het cho 5
// 5. Tim so lon nhat va vi tri cua no
// 0. Thoat

#include <stdio.h>
int main()
{
    int arr[100];
    int n = 0;
    int choice;
    int i, j;
    int hasData = 0; 
    do
    {
        if (!hasData)
        {
            printf("===== MENU =====\n");
            printf("1. Nhap danh sach n so\n");
            printf("2. Hien thi cac so chan\n");
            printf("3. Dem so nguyen to trong danh sach\n");
            printf("4. Tinh tong cac so chia het cho 3 nhung khong chia het cho 5\n");
            printf("5. Tim so lon nhat va vi tri cua no\n");
            printf("0. Thoat\n");
            printf("Lua chon cua ban: ");
        }
        else
        {
            printf("Lua chon ke tiep la gi: ");
        }

        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            do
            {
                printf("Nhap so luong phan tu (0 < n <= 100): ");
                scanf("%d", &n);
                if (n <= 0 || n > 100)
                {
                    printf("So luong phan tu khong hop le. Vui long nhap lai.\n");
                }
            } while (n <= 0 || n > 100);
            for (i = 0; i < n; i++)
            {
                printf("Nhap phan tu thu %d: \n", i + 1);
                scanf("%d", &arr[i]);
            }
            printf("Da nhap xong danh sach %d so.\n", n);
            hasData = 1;
            break;
        case 2:
            if (n == 0)
            {
                printf("Vui long nhap danh sach truoc khi hien thi cac so chan.\n");
            }
            else
            {
                printf("Cac so chan trong danh sach la: \n");
                int countEven = 0;
                for (i = 0; i < n; i++)
                {
                    if (arr[i] % 2 == 0)
                    {
                        printf("%d ", arr[i]);
                        countEven++;
                    }
                }
                printf("\n");
                if (countEven == 0)
                {
                    printf("Khong co so chan nao trong danh sach.\n");
                }
            }

            break;
        case 3:
            if (n == 0)
            {
                printf("hay nhap danh sach truoc khi dem so nguyen to.\n");
            }
            else
            {
                int countPrime = 0;
                for (i = 0; i < n; i++)
                {

                    int count = 0;
                    for (j = 1; j <= arr[i]; j++)
                    {
                        if (arr[i] % j == 0)
                        {
                            count++;
                        }
                    }
                    if (count == 2)
                    {
                        countPrime++;
                    }
                }
                printf("So luong so nguyen to trong danh sach la: %d\n", countPrime);
            }
            break;
        case 4:
            if (n == 0)
            {
                printf("hay nhap danh sach truoc khi tinh tong\n");
            }
            else
            {
                int sum = 0;
                for (i = 0; i < n; i++)
                {
                    if (arr[i] % 3 == 0 && arr[i] % 5 != 0)
                    {
                        sum += arr[i];
                    }
                }
                printf("Tong cac so chia het cho 3 nhung khong chia het cho 5 la: %d\n", sum);
            }
            break;
        case 5:
            if (n == 0)
            {
                printf("hay nhap danh sach truoc khi tim so lon nhat\n");
            }
            else
            {
                int max = arr[0];
                int position = 0;
                for (i = 1; i < n; i++)
                {
                    if (arr[i] > max)
                    {
                        max = arr[i];
                        position = i;
                    }
                }
                printf("So lon nhat trong danh sach la: %d\n", max);
                printf("Vi tri cua so lon nhat la: %d\n", position + 1);
            }
            break;
        case 0:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long nhap lai.\n");
            break;
        }
    } while (choice != 0);
    return 0;
}
