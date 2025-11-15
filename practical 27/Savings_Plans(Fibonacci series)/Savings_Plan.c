#include<stdio.h>
void main()
{
     double a=1,b=0,c=1;
     int n,i=1;
        printf("----------Savings Plan----------");
        printf("\nEnter The Number Of Months :");
        scanf("%d",&n);
        printf("Month(s)\t\tSavings");
        if(n>=1)
        {
            while(i<=n)
            {
                printf("\nMonth %3.d%20.lf",i,c);
                c=a+b;
                b=a;
                a=c;
                i++;
            }
        }
     printf("\n25CE012_Chakalashiya Viraj Pareshbhai");
}
