#include<stdio.h>
void main()
{
    int entry[25];
    int i,p=0,n=0,o=0,e=0,z=0;
    for(i=0;i<=24;i++)
    {
        printf("Enter the Data :");
        scanf("%d",&entry[i]);
    }
    for(i=0;i<=24;i++)
    {
        if(entry[i]>0)
        {
            p++;
            if(entry[i]%2==0)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        else if(entry[i]<0)
        {
            n++;
            if(entry[i]%2==0)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
    }
        printf("Number Of Positive Numbers :%d\n",p);
        printf("Number Of Negative Numbers :%d\n",n);
        printf("Number Of Odd Numbers :%d\n",o);
        printf("Number Of Even Numbers :%d\n",e);
    printf("\n25CE012_Chakalashiya Viraj Pareshbhai");
}

