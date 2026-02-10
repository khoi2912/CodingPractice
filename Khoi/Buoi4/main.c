#include <stdio.h>

int main() {
    ////// for ////////

    // Trường hợp 1 :
    // for (int i = 0; i < 10; i ++){
    //     printf("i : %d\n", i);
    // }
   
    
    // Trường hợp 2:
    // int i ;
    // for ( i = 0 ; i < 10; i ++){
    //     printf("i trong vòng lặp : %d\n", i);
        
    // }

    // printf("i ngoài vòng lặp: %d\n", i);



    ////// while ////////
    // Trường hợp có thời hạn:
     int i = 0;
    while (i < 10)
    {
        printf("i : %d\n", i);
        i = i + 1;
    }

    // Trường hợp vô thời hạn:
    int i = 15;

    while (1)
    {
        i = i - 1; 
        printf("i ở ngoài : %d\n", i); 

        if (i < 15){
            printf("i ở trong : %d\n", i);
            break; // điều kiện để thoát vòng lặp
        }   
    }

    return 0; 
}