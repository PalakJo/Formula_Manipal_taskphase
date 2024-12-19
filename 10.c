//use Bubble sort on an array based on user input and on the sorted array perform binary search algorithm to find an element
#include<stdio.h>
int main()
{
    int i,j,n,a[100], temp;
    printf("enter number of elements\n");
    scanf("%d", &n);
    printf("enter elements\n");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("for bubble sort press : b\n");
    printf("for selection sort press : s\n");
    char ch;
    scanf(" %c", &ch);
    switch(ch)
    {
        case 'b':
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            printf("array after bubble sort: \n");
            for (i=0;i<n;i++)
            {
                printf("%d\t", a[i]);
            }
            printf("\n");
            break;

        case 's': 
            for(i = 0; i < n-1; i++)
            {
                int pos = i, small = a[i];
                for(j=i+1; j<n; j++)
                {
                    if(small > a[j])
                    {
                        pos = j; 
                        small = a[j];
                    }
                }
                a[pos] = a[i]; 
                a[i] = small;
            }
            printf("array after selection sort: \n");
            for (i=0;i<n;i++)
            {
                printf("%d\t", a[i]);
            }
            printf("\n");
            break;

        default: 
            printf("please input a valid choice\n");
            break;

    }
    
    int ele, mid, lo=0, hi=n-1;
    printf("enter element to search for\n");
    scanf("%d", &ele);
    do{
        mid=(lo+hi)/2;
        if (ele< a[mid]){
            hi=mid-1;
        }
        else if(ele > a[mid]){
            lo=mid+1;
        }
    } while(ele!=a[mid] && lo<=hi);

    if (ele== a[mid]){
        printf("element found at position %d\n", mid+1);
    }
    else printf("element not found\n");
    return 0;
}