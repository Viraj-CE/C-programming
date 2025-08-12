//Book ID displayer
#include<stdio.h>
void main()
{
    for(int i=1  ;i<=50;i++)
    {
    printf("\n Book ID :%d",i);
        if(i%5==0)
        {
            printf("(Special Edition)");
        }
    }
}
