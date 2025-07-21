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
    printf("Your BMI is \t\t :%f",BMI);
    if(BMI<18.5)
    {
        printf("\nYour are Under Weight");
    }
    else if(BMI>=18.5 | BMI<24.9)
    {
        printf("\nYou are Healthy");
    }
    printf("\nThis is Made MY Viraj Chaklasiya(25TCEJO4)");
    return 0;
}
