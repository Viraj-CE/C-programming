#include<stdio.h>
void main()
{
    int max=0,profit;
    int num=0;
    printf("Enter the Number of Days :");
    scanf("%d",&num);
    int price[num];
    int min=price[0];
    for(int i=0;i<num;i++)
    {
        printf("Enter The Prices On The day %d :",i+1);
        scanf("%d",&price[i]);
    }
    for(int i=0; i<5; i++)
    {
        if(price[i]<min)
        {
            min=price[i];
        }
        else
        {
            profit=price[i]-min;
            if(profit>max)
            {
                max=profit;
            }
        }
    }
    if(max>0)
    {
        printf("The profit is: %d",max);
    }
    else
        printf("No profit earned");
    printf("\n25CE012_Chakalashiya Viraj Pareshbhai");
}

