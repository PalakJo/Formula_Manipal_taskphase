//program to swap every two adjacent elements in an array using pointers. 
#include<stdio.h>
int main()
{
    int a[100], n, i, temp;
    int *p;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d", a+i);
    }
    for(i=0;i<n;i++){
        printf("%d\t", *(a+i));
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        temp=*(a+i);
        *(a+i)=*(a+i+1);
        *(a+i+1)=temp; 
        //i++;
    }
    for(i=0;i<n;i++){
        printf("%d\t", *(a+i));
    }
    return 0;
}