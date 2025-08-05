//A Program To For conlusion of age criteria to open a savings account in bank
#include<stdio.h>
void main()
{
    int age ;
    printf("Enter Your Age :");
    scanf("%d",&age);
    if(age<=18)
    {
        printf("Sorry ! You are not eligible to open an account you must be 18 years old");
    }
    else
    {
        printf("Your are eligible to open a bank account");
    }
}