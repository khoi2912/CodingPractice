#include <stdio.h>

int main() {
    char c;
    printf("Nhap ky tu: ");
    scanf(" %c", &c);

    switch(c) 
    {
        case 'y':
            printf("YES");
            break;

        case 'n':
            printf("NO");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}