#include<stdio.h>
void main()
{
    int ID[5]={20,19,18,17,16},i,j,id[20],counter=0;
    for(i=0;i<5;i++)
    {
        printf("Enter The ID :");
        scanf("%d",&id[i]);
    }
    for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
        {
            if(ID[i]==id[j])
            {
                counter++;
            }
        }

    }
    if(counter==5)
    {
        printf("All elements are present in the existing one.");
    }
    else
    {
        printf("%d elements are missing",5-counter);
    }

}
