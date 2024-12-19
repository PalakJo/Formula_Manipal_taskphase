//program to print equilateral triangle or Pyramid star pattern series of n rows
#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("enter number of rows\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
         
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }

        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}