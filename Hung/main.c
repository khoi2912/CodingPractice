//BT1 : S=1+1/2+1/3+...+1/n
#include <stdio.h>

int main()
{
    int S = 0;
    int i;
    for(i = 1 ; i <= 6 ; i++)
    {
        S = S + i;
    }

    printf("S = %d", S);

    return 0;
}