//user input elements of 4x4 matrix and print, add each element and print the sum, also print the sum of both the diagonals
#include<stdio.h>
int n=4, m=4, i, j, a[50][50];
int d1sum()
{
    int sumd1=0;
    for(i=0;i<n;i++)
    {
        sumd1=sumd1+a[i][i];
    }
    return (sumd1);
}
int d2sum()
{
    int sumd2=0;
    for(i=0;i<n;i++)
    {
        sumd2=sumd2+a[i][n-i-1];
    }
    return (sumd2);
}

int main()
{
    int sum=0;
printf("enter elements of a 4x4 matrix\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d", &a[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d\t", a[i][j]);
    }
    printf("\n");
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        sum= sum + a[i][j];
    }
}
printf("sum of all elements=%d\n", sum);
int sum1= d1sum();
int sum2= d2sum();
printf("sum of diagonal 1 is %d\n", sum1);
printf("sum of diagonal 2 is %d", sum2);
return 0;
}