//Create a structure to represent a product in an inventory
#include<stdio.h>
struct inventory
    {
        int id;
        char name[100];
        int q;
        float p;
    };
int main()
{
    int i, n;
    float tv=0;
    int maxp=0, maxq=0;
    printf("enter number of products in inventory\n");
    scanf("%d", &n);
    struct inventory prod[n];
    for(i=0;i<n;i++){
        printf("enter details for product %d\n", i+1);

        printf("product ID: ");
        scanf("%d", &prod[i].id);
        //printf("\n");

        printf("product name: ");
        scanf("%s", prod[i].name);
        //printf("\n");

        printf("quantity: ");
        scanf("%d", &prod[i].q);
        //printf("\n");

        printf("price: ");
        scanf("%f", &prod[i].p);
        //printf("\n");

        if(prod[i].p>prod[maxp].p){
            maxp=i;
        }
        if(prod[i].q>prod[maxq].q){
            maxq=i;
        }

        tv=tv + (prod[i].q)*(prod[i].p);
    }
    printf("total value of inventory is: %.2f\n", tv);

    printf("product with highest price is product : %d\n", maxp+1);
    printf("product ID: %d\n", prod[maxp].id);
    printf("product name: %s\n", prod[maxp].name);
    printf("quantity: %d\n", prod[maxp].q);
    printf("price: %.2f\n", prod[maxp].p);

    printf("product with highest quantity is product : %d\n", maxq+1);
    printf("product ID: %d\n", prod[maxq].id);
    printf("product name: %s\n", prod[maxq].name);
    printf("quantity: %d\n", prod[maxq].q);
    printf("price: %.2f\n", prod[maxq].p);
    
    
}