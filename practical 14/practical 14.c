//Atm Simulator
#include<stdio.h>
void main ()
{
    int PIN=8888,enteredpin,choice,withdrawcount;
    float balance=5000,amount;
    printf("Welcome To National Bank Of Bharat");
    printf("\nEnter PIN :");
    scanf("%d",&enteredpin);
    if(PIN!=enteredpin)
    {
        printf("Incorrect PIN ");
    }
    else
    {
        printf("Login Successful");
        do
        {
        printf("\n==========ATM MENU==========");
        printf("\n1. Withdraw");
        printf("\n2. Deposit");
        printf("\n3. Check Balance");
        printf("\n4. Exit");
        printf("\n============================");
        printf("\nEnter Choice :");
        scanf("%d",&choice);
        printf("\n============================\n");
        switch (choice)
            {
            case 1:
                printf("Enter The Amount To Withdraw :");
                scanf("%f",&amount);
                if(withdrawcount>=5)
                {
                    printf("Withdrawl limit reached");
                }
                else if (amount<=0)
                {
                    printf("Withdrawl unsuccesful");
                }
                else if (amount >= balance)
                {
                    printf("Insufficient Balance !");
                }
                else
                {
                    balance -= amount;
                    withdrawcount++;
                    printf("Withdrawl Successful ! \nRemaining Balance :%.2f",balance);
                }
                break ;
            case 2:
                printf("Enter THe Amount To Deposit :");
                scanf("%f",&amount);
                if(amount<=0)
                {
                    printf("Enter A Valid Amount !");
                }
                else
                {
                    balance += amount;
                    printf("Deposit Successful ! \nCurrent Balance :%.2f",balance);
                }
                break;
            case 3:
                printf("Current Balance :%.2f",balance);
                break;
            case 4:
                printf("Thank You ! For using our service");
                break;
            default :
                printf("Enter a Valid Choice");
            }
            printf("\n============================");
        }
        while(choice!=4);
    }


}
