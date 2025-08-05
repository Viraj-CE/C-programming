//Ticket fare cunting Program for amusement park
#include<stdio.h>
void main()
{
    int age ;
    printf("Enter Your Age :");
    scanf("%d",&age);
    if(age<=12)
    {
        printf("Your Ticket Fare is free");
    }
    else
    {
        printf("Your Ticket Fare is Rs.30");
    }
}