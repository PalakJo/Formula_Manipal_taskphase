//program to calculate electricity bills based on usage slabs
#include <stdio.h>

int main() 
{
    int u, bill;
    printf("enter units used\n");
    scanf("%d", &u);
    if (u<=100){
        bill=u*5;
    }
    else if (u>100 && u<=300){
        bill= 500 + (u-100)*8;
    }
    else if (u > 300){
        bill= 500 + 1600 + (u-300)*10;
    }
    printf("electricity bill is %d rupees.\n", bill);
    return 0;
}
