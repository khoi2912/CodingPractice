// for co ban: tinh tong tu 1 den n
#include <stdio.h>

int main() {
    int n, i = 1;
    int sum = 0;  
        
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; 
        
    }
    printf("S = %d\n", sum);
    return 0;
    
}
