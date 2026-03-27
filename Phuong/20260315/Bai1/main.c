#include <stdio.h>

int main(){
    int n, i = 1;
    do
    {
        printf("Nhap n:");
        scanf("%d", &n);        
    } while (n < 2 || n > 9);
    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", n , i , n*i);
    }
    return 0;
} 



