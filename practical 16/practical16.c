#include<stdio.h>
void main()
{
    int M=21,U,C;
    while(M>1)
    {
        printf("Matchsticks Remaining\t:%d",M);
        printf("\nYour Pick\t\t:");
        scanf("%d",&U);
        if(U>=5)
        {
            printf("please enter a valid number\n");
            continue;
        }
        C=5-U;
        printf("Computer Picked \t:%d\n",C);
        M=M-(U+C);
        if(M==1)
        {
            printf("Computer Wins !!!");
        }

    }
}
