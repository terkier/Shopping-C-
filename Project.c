#include <stdio.h>
#include <windows.h>

void section1();
void section2();
void section3();



int main()
{
    int section;

    printf("Welcome to Magic A!\n");
    printf("\nIn this store we have a lot of things that might interest you!\n");
    printf("\nWe have 3 aisle, the first aisle contain Grocery, the second aisle contain Hardware/Furnitures");
    printf("\nand the last aisle contain Medicines!\n");



do
{
    printf("\nPick one aisle to shop!\n");
    printf ("\nType '1' for Grocery aisle,'2' for hardware/furnitures,'3' for medicines aisle: ");
    scanf("%d", &section);

    switch(section)
    {
    case 1:
        section1();
        break;

    case 2:
        section2();
        break;

    case 3:
        section3();
        break;

    default:
        printf("\nInvalid aisle! Please choose 1 , 2, or 3.\n");


    }



}while(section < 1 || section > 3);

return 0;

}
void product1();
void product2();
void product3();
void choice();


void section1()
{

    int quantity = 0;
    int product = 0;
    double price = 0.0;
    double total = 0.0;
    char name[50] = "";




    printf("\nWelcome to the Grocery aisle!\n");
    printf("We have several product categories:\n");
    printf("1. Instant & Packaged Foods\n");
    printf("2. Bakery & Breads\n");
    printf("3. Snacks & Sweets\n");

do
{
    printf("\nType '1' for Instant & Packaged Foods, '2' for Bakery & Breads, '3' Snacks & Sweets: ");
    scanf("%d", &product);

    switch(product)
    {
    case 1:
         product1();
        break;

    case 2:
        product2();
        break;

    case 3:
        product3();
        break;

    default:
        printf("\nInvalid Product!, please type 1 , 2, or 3.\n");

    }



} while(product < 1 || product > 3);

}





void product1()
{
    int quantity = 0;
    int choice = 0;
    double price = 0.0;
    double total = 0.0;
    char name[50] = "";
    char currency [] = "PHP";
    char answer[10];
    int exitChoice = 0;



    printf("1.Cup Noodles\n");
    printf("2.Corned Beef\n");
    printf("3.Lucky Me\n");
    printf("\nChoose the category (1-3): ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:
            price = 40.00;
            snprintf(name, sizeof(name), "Cup Noodles");
            break;
        case 2:
            price = 45.00;
            snprintf(name, sizeof(name), "Corned Beef");
            break;
        case 3:
            price = 24.00;
            snprintf(name, sizeof(name), "Lucky Me");
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nThanks for choosing %s\n", name);
    printf("Quantity: %d\n", quantity);
    printf("Price per item: %s%.2lf\n", currency , price);
    printf("Total: %s%.2lf\n", currency , total );


    sleep(2);


     do {
        printf("\nDo you want to leave the store?\n");
        printf("Enter 1 for YES, 0 for NO: ");
        scanf("%d", &exitChoice);

        if (exitChoice == 0) {
            decision();
            break;

        } else if (exitChoice == 1) {
            printf("\nThank you for shopping!\n");
        } else {
            printf("Invalid input. Please enter 1 or 0.\n");
        }

    } while (exitChoice != 0 && exitChoice != 1);


}


void decision()
{
     int choice;

do
{
    printf("\n what product do you want to go?\n");
    printf("1. Instant & Packaged Foods\n");
    printf("2. Bakery & Breads\n");
    printf("3. Snacks & Sweets\n");
    printf("4. If you wish to proceed to the aisles.\n");
    printf("\nType the number to proceed: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        product1();
        break;

    case 2:
        product2();
        break;

    case 3:
        product3();
        break;


    default:
        printf("\nInvalid aisle! Please choose 1 , 2, or 3.\n");


    }



}while(product2 == 1 || product3 == 3);

}















void product2()
{
    printf("\nWelcome\n");
}

void product3()
{
    printf("\nWelcome!\n");
}




void section2()
{
    printf("welcome to Hardware/Furniture aisle!");


}



void section3()
{
    printf("Welcome to Medicines aisle!");
}
