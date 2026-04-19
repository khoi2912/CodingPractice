#include <stdio.h>

int main () {
    int a[10];
    int i;
    int n ;

    for (i = 0 ; i < 10 ; i++ ){
        printf("Nhap a[%d]: \n", i); 
        scanf("%d", &a[i]); 
    }

    int max = a[0]; 
    int min = a[0]; 
    int posMax = 0;
    int posMin = 0;

    for (i = 1 ; i < 10 ; i ++) {
        if (a[i] > max){
            max = a[i]; 
            posMax = i; 
        }

        if (a[i] < min) { 
            min = a[i]; 
            posMin = i; 
        }
    }

    printf("number Max in array %d\n", max);
    printf("position number Max in array %d\n", posMax);

    printf("number Min in array %d\n", min);
    printf("position number Min in array %d\n", posMin);

    return 0;
}