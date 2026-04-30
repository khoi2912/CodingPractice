// ===== MENU XỬ LÝ MẢNG =====
// 1. Nhập mảng
// 2. Xuất mảng
// 3. Kiểm tra số chẵn/lẻ trong mảng
// 4. Kiểm tra số nguyên tố trong mảng
// 5. Kiểm tra số đối xứng trong mảng va vi tri
// 6. Đếm số lần xuất hiện của một phần tử va chi ra vi tri trong mang
// 7. Sắp xếp mảng tăng dần
// 0. Thoát

// ví dụ ở 3 là 121, 151,545, 595.
#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, j;
    int choice;
    do
    {
        printf("===MENU===\n");
        printf("1. Nhap mang\n");
        printf("2. Xuat mang\n");
        printf("3. Kiem tra so chan/le trong mang\n");
        printf("4. Kiem tra so nguyen to trong mang\n");
        printf("5. Kiem tra so doi xung trong mang\n");
        printf("6. Dem so lan xuat hien cua mot phan tu\n");
        printf("7. Sap xep mang tang dan\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            do
            {
                printf("Nhap so luong phan tu 0 < n < 100 \n");
                scanf("%d", &n);
                if (n <= 0 || n > 100)
                {
                    printf("So luong phan tu khong hop le. Vui long nhap lai \n");
                }
            } while (n <= 0 || n > 100);
            for (i = 0; i < n; i++)
            {
                printf("Nhap gia tri vao phan tu thu %d: \n", i + 1);
                scanf("%d", &arr[i]);
            }
            break;
        case 2:

            if (n == 0)
            {
                printf("Mang rong. Nhap du lieu truoc khi thao tac \n");
            }
            else
            {
                printf("Cac gia tri phan tu trong mang la: \n");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("Da nhap xong danh sach \n");
            }
            break;
        case 3:
            if (n == 0)
            {
                printf("Mang rong. Nhap du lieu truoc khi thao tac \n");
            }
            else
            {
                int countEven = 0;
                int countOdd = 0;
                printf("Cac so chan trong mang la: \n");
                for (i = 0; i < n; i++)
                {
                    if (arr[i] % 2 == 0)
                    {
                        printf("%d ", arr[i]);
                        countEven++;
                    }
                }
                printf("So luong so chan trong mang la: %d\n", countEven);
                printf("Cac so le trong mang la: \n");
                for (i = 0; i < n; i++)
                {
                    if (arr[i] % 2 != 0)
                    {
                        printf("%d ", arr[i]);
                        countOdd++;
                    }
                }
                printf("So luong so le trong mang la:%d \n", countOdd);
            }
            break;
        case 4:
            if (n == 0)
            {
                printf("Mang rong. Nhap du lieu truoc khi thao tac \n");
            }
            else
            {
                int countPrime = 0;
                printf("Cac so nguyen to trong mang la: ");
                for (i = 0; i < n; i++)
                {
                    int count = 0;
                    for (j = 2; j < arr[i] / 2; j++)
                    {
                        if (arr[i] % j == 0)
                        {
                            count++;
                            break;
                        }
                    }
                    if (count == 0)
                    {
                        printf("%d ", arr[i]);
                        countPrime++;
                    }
                }
                printf("\n");
                if (countPrime == 0)
                {
                    printf("Khong co so nguyen to nao trong mang \n");
                }
                else
                {
                    printf("So luong so nguyen to trong mang la: %d", countPrime);
                }
                printf("\n");
            }
            break;
        case 5:
            if (n == 0)
            {
                printf("Mang rong. Nhap du lieu truoc khi thao tac \n");
            }
            else
            {
                printf("Cac so doi xung trong mang la: \n");
                int countSymetric = 0;
                for (i = 0; i < n; i++)
                {
                    if (arr[i] > 0)
                    {
                        int digit;
                        int reversed = 0;
                        int original = arr[i];
                        while (original > 0)
                        {
                            digit = original % 10;
                            reversed = reversed * 10 + digit;
                            original = original / 10;
                        }
                        if (arr[i] == reversed)
                        {
                            printf("So %d tai vi tri %d \n", arr[i], i);
                            countSymetric++;
                        }
                    }
                }
                if (countSymetric == 0)
                {
                    printf("Khong co so doi xung trong mang \n");
                }
                else
                {
                    printf("Tong so doi xung trong mang la %d \n", countSymetric);
                }
            }
            break;
        case 6:
            if (n == 0)
            {
                printf("Mang rong. Nhap du lieu truoc khi thao tac \n");
            }
            else
            {
                int countPos = 0;
                int searchValue;
                int position[100];
                int posIndex;
                printf("Nhap so can dem so lan xuat hien \n");
                scanf("%d", &searchValue);
                for (i = 0; i < n; i++)
                {
                    if (arr[i] == searchValue)
                    {
                        position[posIndex] = i;
                        posIndex++;
                        countPos++;
                    }
                }
                if (countPos == 0)
                {
                    printf("Khong tim thay so %d trong mang \n", searchValue);
                }
                else
                {
                    printf("So %d xuat hien %d lan trong mang \n", searchValue, countPos);
                    printf("Tai cac vi tri ");
                    for (i = 0; i < posIndex; i++)
                    {
                        printf("%d ", position[i]);
                    }
                }
                printf("\n");
            }
            break;
        case 7:
        {
            if (n == 0)
            {
                printf("Mang rong. Nhap du lieu truoc khi thao tac \n");
            }
            else
            {
                char subChoice;
                do
                {
                    printf("==MENUTangGiam==\n");
                    printf("a. Tang dan\n");
                    printf("b. Giam dan\n");
                    printf("c. Thoat chuong trinh con\n");
                    printf("Ban chon: ");
                    scanf(" %c", &subChoice);

                    switch (subChoice)
                    {
                    case 'a':
                    {
                        for (i = 0; i < n - 1; i++)
                        {
                            for (j = i + 1; j < n; j++)
                            {
                                if (arr[i] > arr[j])
                                {
                                    int temp = arr[i];
                                    arr[i] = arr[j];
                                    arr[j] = temp;
                                }
                            }
                        }
                        printf("Mang sau khi sap xep tang dan: ");
                        for (i = 0; i < n; i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        printf("\n");
                    }
                    break;
                    case 'b':
                    {
                        for (i = 0; i < n - 1; i++)
                        {
                            for (j = i + 1; j < n; j++)
                            {
                                if (arr[i] < arr[j])
                                {
                                    int temp = arr[i];
                                    arr[i] = arr[j];
                                    arr[j] = temp;
                                }
                            }
                        }
                        printf("Mang sau khi sap xep giam dan: ");
                        for (i = 0; i < n; i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        printf("\n");
                    }
                    break;
                    case 'c':
                        printf("Thoat chuong trinh phu\n");
                        break;
                    default:
                        printf("Lua chon phu khong hop le. Vui long nhap lai\n");
                        break;
                    }
                } while (subChoice != 'c');
            }
        }
        break;
        default:
            printf("Lua chon khong hop le. Vui long nhap lai\n");
            break;
        }
    } while (choice != 0);

    return 0;
}
