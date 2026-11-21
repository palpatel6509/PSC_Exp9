#include<stdio.h>

struct Product{
    int id;
    char name[50];
    float price;
};

/* FUNCTION TO SEARCH PRODUCT BY ID */
void searchProduct( struct Product p[] , int n , int searchId )
{
    int i,found = 0;

    for( i = 1; i <= n; i++ )
    {
        if( p[i].id == searchId )
        {
            printf("\nProduct Found!\n");
            printf("Name: %s\n",p[i].name);
            printf("Price: %.2f\n",p[i].price);
            found = 1;
            break;
        }
    }

    if( found == 0 )
    {
        printf("\nProduct with ID %d not found.\n",searchId);
    }
}

int main()
{
    struct Product p[100];
    int n,i,searchId;

    printf("Enter number of Products:\n");
    scanf("%d",&n);

    for( i = 1; i <= n; i++ )
    {
        printf("\nEnter details for Product %d:\n",i);
        printf("Product ID:");
        scanf("%d",&p[i].id);
        printf("Product Name:");
        scanf("%s",p[i].name);
        printf("Product Price:");
        scanf("%f",&p[i].price);
    }

    printf("\nEnter Product ID to search:");
    scanf("%d",&searchId);

    searchProduct( p , n , searchId );

    return 0;

}