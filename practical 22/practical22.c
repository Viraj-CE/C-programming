#include<stdio.h>
    void main()
    {
        int n,x,y,a;
        char s[5][10];
        printf("Enter The Number Of Reserved Seat :");
        scanf("%d",&n);
        for(a=0;a<5;a++)
        {
            for(int b=0;b<10;b++)
            {
                s[a][b]='O';
            }
        }
        for(a=1;a<=n;a++)
        {
            printf("\nEnter Row And Seat Number For Reserved Seat %d :",a);
            scanf("%d %d",&x,&y);
            s[x-1][y-1]='X';

        }
        printf("Seating Chart :\n");
        for(a=0;a<5;a++)
        {
            printf("Row %d:",a+1);
            for(int b=0;b<10;b++)
            {
                printf("%c ",s[a][b]);
            }
            printf("\n");
        }
        printf("\n25CE012_Chakalashiya Viraj Pareshbhai");
    }

