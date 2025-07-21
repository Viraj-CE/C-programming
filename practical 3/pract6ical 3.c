//Coding a BMI calculator
#include<stdio.h>
int main()
{
    int Weight;
    float Height;
    printf("Your Weight(in kilograms):");
    scanf("%d",&Weight);
    printf("\nYour Height(in meters)\t :");
    scanf("%f",&Height);
    float BMI=Weight/(Height*Height);
    printf("Your BMI is \t\t :%.2f",BMI);
    if(BMI<18.5)
    {
        printf("\nYour are Under Weight");
    }
    else if(BMI>=18.5 & BMI<=24.9)
    {
        printf("\nYou are Healthy");
    }
    else if(BMI>24.9 & BMI<=29.9 )
    {
        printf("\nYour are OverWeight");
    }
    else if(BMI>29.9 & BMI<39.9)
    {
        printf("\nYou are Obesity");
    }
    else
    {
        printf("\nYour are having severe Obesity");
    }
    printf("\nThis is Made MY Viraj Chaklasiya(25TCEJO4)");
    return 0;
}
