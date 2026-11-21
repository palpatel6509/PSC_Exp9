#include<stdio.h>

struct Item {
    char name[50];
    float price;
    int quantity;
};

/* FUNCTION TO UPDATE PRICE AND QUANTITY USING POINTER */
void updateItem( struct Item *it , float priceIncrement , int qtyIncrement )
{
    it->price += priceIncrement;
    it->quantity += qtyIncrement;
}

int main()
{
    struct Item item1;
    float addPrice;
    int addQty;

    /* READ ITEM INFORMATION */
    printf("Enter item name:\n");
    scanf("%s",item1.name);
    printf("Enter item price:\n");
    scanf("%d",&item1.price);
    printf("Enter item quantity:\n");
    scanf("%d",&item1.quantity);

    /* READ VALUES TO UPDATE */
    printf("Enter price increment:\n");
    scanf("%f",&addPrice);
    printf("Enter quantity increment:\n");
    scanf("%d",&addQty);

    /* CALL UPDATE FUNCTION BY PASSING ADDRESS OF item1 */
    updateItem( &item1 , addPrice , addQty );

    /* PRINT UPDATED VALUES */
    printf("\n--- UPDATED ITEM DETAILS ---\n");
    printf("Name: %s\n",item1.name);
    printf("Updated Price: %.2f\n",item1.price);
    printf("Updated Quantity: %d\n",item1.quantity);

    return 0;
}