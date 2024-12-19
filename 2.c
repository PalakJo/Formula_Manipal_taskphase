// program that converts seconds into hours, minutes, and remaining seconds.
#include <stdio.h>

int main() 
{
    int n, h, min, sec;
    printf("enter time in seconds\n");
    scanf("%d", &n);
    h=n/3600;
    min=(n%3600)/60;
    sec=(n%3600)%60;
    printf("%d hours, %d minutes, %d seconds", h, min, sec);
}