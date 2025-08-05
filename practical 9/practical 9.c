#include<stdio.h>
void main()
{
    float Total_Amount,DiscountR,DiscountA,Final_Amount;
    printf("Enter The Total Amount :");
    scanf("%f",&Total_Amount);
    printf("================================================================");
    if(Total_Amount<=1000)
    {
        DiscountR=0;
    }
    else if(Total_Amount>1000 && Total_Amount<=5000)
    {
        DiscountR=10;
    }
    else
    {
        DiscountR=20;
    }
    DiscountA=Total_Amount*(DiscountR/100);
    Final_Amount=Total_Amount-DiscountA;
    printf("\nAmount(Rs.)           :%10.2f",Total_Amount);
    printf("\nDiscount(per.)        :%10.2f", DiscountR);
    printf("\nFinal Amount(Rs.)     :%10.2f",Final_Amount);
    printf("\n================================================================");

}