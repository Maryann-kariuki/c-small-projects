#include<stdio.h>
 //Declare the variable 
char CustomerName[50];
    int CustomerID,UnitsConsumed;
    float TotalBill,Surcharge,TotalAmount,ChargesPerUnit;
int main(){
   
    

    //prompt the user to key in the customer detaILs
printf("Enter CustomerName:");
scanf("%s",CustomerName);
printf("Enter CustomerID:");
scanf("%d",&CustomerID );
printf("Enter UnitsConsumed:");
scanf("%d",&UnitsConsumed);
    
    //Compute the 'ChargePerUnit'price
    if(UnitsConsumed<=199)
    {
        ChargesPerUnit=1.20;
    }
    else if(UnitsConsumed>=200 && UnitsConsumed <400)
    {
        ChargesPerUnit=1.50;
    }
    else if (UnitsConsumed>=400 && UnitsConsumed<600)
    {
       ChargesPerUnit=1.80; 
    }
    else if(UnitsConsumed>=600)
    {
        ChargesPerUnit=2.00;

    }
    
    //Calculate the Customer's total bill
    TotalBill=UnitsConsumed*ChargesPerUnit;
    if (TotalBill<100){
        printf("\n THE TOTAL BILL IS LESS THAN 100");
        return 0;
    }

    //calculate the surcharge
    if (TotalBill>400)
    {
        Surcharge=0.15*TotalBill;
    }
    else{
        Surcharge=0;
    }

    //compute the total amount to be paid
    TotalAmount=Surcharge+TotalBill;

    //Display the Customer details and Bills
    printf("\nELECTRICITY BILL\n");
    printf("CustomerID:%i\n",CustomerID);
    printf("CustomerName:%s\n",CustomerName);
    printf("Unitsconsumed:%i\n",UnitsConsumed);
    printf("TotalBill:%f\n",TotalBill);
    printf("Surcharge:%f\n",Surcharge);
    printf("TotalAmount:%f",TotalAmount);
    return 0;


}