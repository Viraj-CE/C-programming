//Foodies Software
#include<stdio.h>
void main()
{
    int order;
    int total=0;
    printf("===============Menu===============");
    printf("\nSr.No  Items            Price  ");
    printf("\n==================================");
    printf("\n1.     Burger           RS.150 ");
    printf("\n2.     Pizza            RS.200 ");
    printf("\n3.     Pasta            RS.120 ");
    printf("\n4.     Sandwich         RS.100 ");
    printf("\n5.     French Fries     RS.80 ");
    printf("\n==================================");
A : printf("\nEnter The Serial No. to order :");
    scanf("%d",&order);
    switch(order)
    {
    case 1:
        total=total+150;
        printf("You Ordered Burger priced Rs.150 .Total is %d",total);
        break ;
    case 2:
        total=total+200;
        printf("You Ordered Pizza priced Rs.200 .Total is %d",total);
        break ;
    case 3:
        total=total+120;
        printf("You Ordered Pasta priced Rs.120 .Total is %d",total);
        break ;
    case 4:
        total=total+100;
        printf("You Ordered Sandwich priced Rs.100 .Total is %d",total);
        break ;
    case 5 :
        total=total+80;
        printf("You Ordered French Fries priced Rs.80 .Total is %d",total);
        break ;
    case 0 :
        printf("Your Order Has been placed .Total is %d",total);
        goto B;
        break ;
    default :
        printf("Please Enter a Valid Serial No.");
    }
    goto A ;
 B:

}
