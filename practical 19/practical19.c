#include<stdio.h>
void main()
{
    int step;
    printf("Enter the Number of Steps :");
    scanf("%d",&step);
    for(int i=1;i<=step;i++)
    {
        for(int x=1;x<=i;x++)
        {
            if(x%2==0)
            {
                printf("0\t");
            }
            else
            {
                printf("1\t");
            }
        }
        printf("\n");
    }
}
