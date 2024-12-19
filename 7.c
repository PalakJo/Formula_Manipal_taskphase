// program to find the second-largest element in an array using pointers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[100], i, j, n, seclarge, temp;
printf("enter array size\n");
scanf("%d", &n);
if(n<2){
    printf("invalid array size\n");
    exit(0);
}
printf("enter array elements\n");
for (i=0;i<n;i++){
    scanf("%d", &a[i]);
}
for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }
    }
for (i=0;i<n;i++){
    printf("%d\t", *(a+i));
}
printf("\n");

int large=a[0];
for (i=0;i<n;i++){
        if (a[i]>large){
            seclarge=large;
            large=*(a+i);
        }
    }
    printf("second largest element is %d", seclarge);
    return 0;
}



