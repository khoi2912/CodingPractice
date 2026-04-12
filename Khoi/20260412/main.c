#include <stdio.h>

int main() {
    int a[100], n = 0;
    int choice;
    int i;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap danh sach n so\n");
        printf("2. Hien thi cac so chan\n");
        printf("3. Dem so nguyen to trong danh sach\n");
        printf("4. Tong cac so chia het cho 3 nhung khong chia het cho 5\n");
        printf("5. Tim so lon nhat va vi tri\n");
        printf("0. Thoat\n");
        printf("==========================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1: {
                do {
                    printf("Nhap n (1-100): ");
                    scanf("%d", &n);
                    if(n <= 0 || n > 100) {
                        printf("Gia tri khong hop le! Nhap lai.\n");
                    }
                } while(n <= 0 || n > 100);

                printf("Nhap %d so:\n", n);
                for(i = 0; i < n; i++) {
                    printf("a[%d] = ", i);
                    scanf("%d", &a[i]);
                }
                break;
            }

            case 2: {
                if(n == 0) {
                    printf("Vui long nhap danh sach truoc (chon 1).\n");
                    break;
                }

                int found = 0;
                printf("Cac so chan: ");
                for(i = 0; i < n; i++) {
                    if(a[i] % 2 != 0)
                        continue;
                    printf("%d ", a[i]);
                    found = 1;
                }

                if(!found)
                    printf("Khong co so chan.");

                printf("\n");
                break;
            }

            case 3: {
                if(n == 0) {
                    printf("Vui long nhap danh sach truoc (chon 1).\n");
                    break;
                }

                int count = 0;

                for(i = 0; i < n; i++) {
                    int num = a[i];

                    if(num < 2)
                        continue;

                    int isPrime = 1;
                    int j = 2;

                    while(j * j <= num) {
                        if(num % j == 0) {
                            isPrime = 0;
                            break;
                        }
                        j++;
                    }

                    if(isPrime)
                        count++;
                }

                printf("So luong so nguyen to: %d\n", count);
                break;
            }

            case 4: {
                if(n == 0) {
                    printf("Vui long nhap danh sach truoc (chon 1).\n");
                    break;
                }

                int sum = 0;

                for(i = 0; i < n; i++) {
                    if(a[i] % 3 == 0 && a[i] % 5 != 0) {
                        sum += a[i];
                    }
                }

                printf("Tong cac so chia het cho 3 nhung khong chia het cho 5: %d\n", sum);
                break;
            }

            case 5: {
                if(n == 0) {
                    printf("Vui long nhap danh sach truoc (chon 1).\n");
                    break;
                }

                int max = a[0];
                int pos = 0;

                for(i = 1; i < n; i++) {
                    if(a[i] > max) {
                        max = a[i];
                        pos = i;
                    }
                }

                printf("So lon nhat: %d\n", max);
                printf("Vi tri (bat dau tu 0): %d\n", pos);
                printf("Vi tri (bat dau tu 1): %d\n", pos + 1);
                break;
            }

            case 0:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }

    } while(choice != 0);

    return 0;
}