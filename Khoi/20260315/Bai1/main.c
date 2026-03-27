#include <stdio.h>

int main() {
    int n;
    int s;   
    do
    {
        printf("Nhap n: \n");
        scanf("%d", &n);
    } while (n < 2 || n > 9);
    
    for(int i = 1; i <= 10; i++) {
        s = n * i;
        printf("Bang cuu chuong %d: %d * %d = %d\n",n, n, i, s );
    }
    
    return 0;
}