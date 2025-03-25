/*
    Program Descriptor: assigning, inputting, displaying struct values.

    Author: Aleksy Szopinski

    Date: 18/03/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names
#define DESC 21

//struct templates
struct stock_record
{
    int no;
    char description[DESC];
    float price;
    int qty;
};
//Function Signatures


//Main 
int main()
{
    char tempStockItemDesc[DESC];
    struct stock_record stock_item;

    stock_item.no = 1234;
    strcpy(stock_item.description, "This is a stock item");
    stock_item.price = 15.99;
    stock_item.qty = 78;

    printf("Enter stock item number\n");
    scanf("%d",&stock_item.no);
    printf("Enter stock item description\n");
    fgets(tempStockItemDesc,DESC,stdin);
    strcpy(stock_item.description,tempStockItemDesc);
    printf("Enter stock item price\n");
    scanf("%f",&stock_item.price);
    printf("Enter stock item quantity\n");
    scanf("%d",&stock_item.qty);

    printf("Stock Item Number = %d\n", stock_item.no);
    printf("Stock Item Desc = %s\n", stock_item.description);
    printf("Stock Item Price = %f\n", stock_item.price);
    printf("Stock Item Quantity = %d\n", stock_item.qty);

    return 0;    
}

//Function Definitions