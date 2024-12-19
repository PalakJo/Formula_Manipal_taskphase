// program to find sum of 3 numbers, if odd or even, if prime or composite
#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int a, b, c, sum, i, prime=0 ;
    printf("enter 3 numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    sum=a+b+c;
    printf("sum= %d\n", sum);
    if (sum==0){
        printf("sum is even and is neither prime nor composite\n");
        exit(0);
    }
    if (sum % 2 == 0){
        printf("sum is even\n");}
        else {
            printf("sum is odd\n");}
    
    for (i=2;i<sum;i++)
    {
        if (sum%i==0)
        prime=1;
    }
    if (prime==1)
    printf("sum is a composite number\n");
    if (prime==0)
    printf("sum is a prime number\n");
    return 0;
}