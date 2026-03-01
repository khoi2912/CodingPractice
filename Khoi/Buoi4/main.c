#include <stdio.h>

int main() {
    ////// for ////////

    // Trường hợp 1 :
    
    // for (int i = 0; i < 10; i ++){
    //     printf("i : %d\n", i);
    // }
   
    // Trường hợp 2:
    // int i ;
    // for (i = 0 ; i < 20; i ++){
    //     printf("i trong vòng lặp : %d\n", i);
    // }

    // printf("i ngoài vòng lặp: %d\n", i);



    ////// while ////////
    // Trường hợp có thời hạn:
    // int i = 0;
    // while (i < 10)
    // {
    //     printf("i : %d\n", i); 
    //     i = i + 1; 
    // }

    // Trường hợp vô thời hạn:
    // int i = 20;

    // while (1)
    // {
    //     i = i + 1; 
    //     printf("i ở ngoài : %d\n", i); // 21 
    //     if (i < 30){
    //         printf("i ở trong : %d\n", i); // 21
    //         break; // điều kiện để thoát vòng lặp
    //     }   
    // }
 
    //////// do while ///////// 
    // While != Do While
    // While: check điều kiện trước rồi mới chạy 
    // do while: chạy trước kiểm tra điều kiện sau

    // Ví dụ: Nhập số dương (bắt nhập lại nếu sai) -> dùng do-while
    // Yêu cầu:
    // Người dùng phải nhập số > 0
    // Nếu nhập <=0 -> yêu cầu nhập lại
    // Khi nhập đúng -> in ra số đó



    /////
    // int a;
    // do {
    //     printf( " Nhap:\n" );
    //     scanf("%d", &a);
    //     if (a <= 0 ) {
    //         printf( "So khong lon hon 0\n" );
    //         printf( "Nhap lai :\n" );
    //     }
    // } while (a <= 0 );
    // printf( "So da nhap dung: %d \n", a );


    // Ví dụ: Tính tổng các số từ 1 -> n
    // Yêu cầu:
    // Nhập số nguyên dương n
    // Tính tổng
    // S = 1 + 2 + 3 + ... + n
    // in kết quả

    int n;
    int S = 0;
    do {
        printf("Nhap so duong n: ");
        scanf("%d", &n); 

        if(n <= 0) {
            printf("So khong hop le, vui long nhap lai. \n");
        }
    }while (n <= 0);
    
    for (int i = 1; i <= n; i++) {
        S = S + i;
    }
    printf("S tu 1 den %d = %d\n",n, S);

    return 0;
}