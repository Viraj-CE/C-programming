#include<stdio.h>
void main()
{
    int row,column,res;
    printf("Enter The Number Of Rows :");
    scanf("%d",&row);
    printf("Enter The Number OF Columns :");
    scanf("%d",&column);
    printf("\nAMultiplication Table (%d X %d):\n",row,column);
    for(int r=1;r<=row;r++)
    {
        for(int c=1;c<=column;c++)
        {
            res=c*r;
            printf("%4d\t",res);
        }
        printf("\n");
    }
}
