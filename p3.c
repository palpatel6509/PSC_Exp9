#include<stdio.h>
#include<string.h>

struct Product{
    int id;
    char name[50];
    float price;
};

/* FUNCTION TO SORT PRODUCTS ALPHABETICALLY BY NAME */
void sortByName( struct Product p[] , int n )
{
    int i,j;
    struct Product temp;

    for( i = 1; i <= n-1; i++ )
    {
        for( j = 1; j <= n-i-1; j++ )
        {
            if( strcmp(p[j].name , p[j+1].name) > 0 )
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
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

    sortByName( p , n );

    printf("\n--- PRODUCTS SORTED BY NAME ---\n");
    printf("ID\tName\tPrice\n");
    for( i = 1; i <= n; i++ )
    {
        printf("%d\t%s\t%.2f\n",p[i].id,p[i].name,p[i].price);
    }

    return 0;
}