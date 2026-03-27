#include <stdio.h>
int main() {
    int n, i = 1;          
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
    
}