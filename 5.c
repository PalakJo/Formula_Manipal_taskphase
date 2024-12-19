//program to remove all duplicates from an array of integers
#include<stdio.h>

int main()
{
    int a[100], i, n, j, m;
    printf("enter array size\n");
    scanf("%d", &n);
    printf("enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (a[i]==a[j]){
                for (m=j;m<n;m++){
                    a[m]=a[m+1];
                }
            n--;
            j--;
            }
        }
    }
    printf("array after removing duplicate integers\n");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    return 0;
}