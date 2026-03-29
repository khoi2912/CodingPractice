#include <stdio.h>

int main() {
    int n;
    printf("Nhap so 0-9: ");
    scanf(" %d", &n);

    switch(n) 
    {
        case 0:
            printf("SO CHAN");
            break;
         case 1:
            printf("SO LE");
            break;    
         case 2:
            printf("SO CHAN");
            break; 
         case 3:
            printf("SO LE");
            break;    
         case 4:
            printf("SO CHAN");
            break;  
         case 5:
            printf("SO LE");
            break; 
         case 6:
            printf("SO CHAN");
            break; 
         case 7:
            printf("SO LE");
            break; 
         case 8:
            printf("SO CHAN");
            break;    
         case 9:
            printf("SO LE");
            break; 

        default:
            printf("KHONG HOP LE\n");
    }

    return 0;
}