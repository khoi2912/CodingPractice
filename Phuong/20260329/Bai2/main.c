#include <stdio.h>

int main() {
   int n;
   printf("Nhap so nguyen:");
   scanf("%d", &n);
    if (n < 0 || n > 100)
    {
        printf("So vua nhap khong hop le!");
        return 1;
    }
    switch ( n % 2 )
    {
    case 0:
        printf("%d la so chan", n);
        break;
    
    case 1:
        printf("%d la so le", n);
        break;
    }
    return 0;
}
