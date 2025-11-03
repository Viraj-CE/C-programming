#include<stdio.h>
#include<conio.h>
#include<string.h>
struct coach
{
    char name[100];
    int age;
    int experience;
};
struct team
{
    char sport[100];
    char name[100];
    struct coach cinfo ;
};
void main()
{
    int choice=0,choice1=0,i=0,x,y;
    struct team Team[100];
    char find[100],sportname[100],teamname[100],coachname[100];
    do
    {
        printf("\n=====Welcome=====");
        printf("\n1.Teams");
        printf("\n2.Find Team");
        printf("\n3.Add Teams");
        printf("\n4.Edit Coach");
        printf("\n5.Exit");
        printf("\n=================");
        printf("\nEnter Your Choice :");
        scanf("%d",&choice);
        //getch();
        //display all Teams
        if(choice==1)
        {
            if(i==0)
            {
                printf("\nNo Teams In DataBase !");
            }
            else
            {
                for(int a=0;a<i;a++)
                {
                    strcpy(sportname,Team[a].sport);
                    strcpy(teamname,Team[a].name);
                    strcpy(coachname,Team[a].cinfo.name);
                    printf("\n===============Team %d===============",a+1);
                    printf("\nSport Name        :%s",sportname);
                    printf("\nTeam Name         :%s",teamname);
                    printf("\nCoach Name        :%s",coachname);
                    printf("\nCoach Age         :%d",Team[a].cinfo.age);
                    printf("\nCoach Experience  :%d years",Team[a].cinfo.experience);
                }
            }
        }
        else if(choice==2)
        {
            printf("\nEnter The Team Name or Sport :");
            fflush(stdin);
            gets(find);
            for(x=0;x<=i;x++)
            {
                if(strcmp(Team[x].name,find)==0 || strcmp(Team[x].sport,find)==0)
                {
                    printf("\n===============Team %s===============",Team[x].name);
                    printf("\nSport Name        :%s",Team[x].sport);
                    printf("\nTeam Name         :%s",Team[x].name);
                    printf("\nCoach Name        :%s",Team[x].cinfo.name);
                    printf("\nCoach Age         :%d",Team[x].cinfo.age);
                    printf("\nCoach Experience  :%d years",Team[x].cinfo.experience);
                }
            }
            if(x==i+1)
            {
                printf("\nTeam Not Found !");
            }

        }
        else if(choice==3)
        {
            do
            {
                printf("\n=====Add Team=====");

                fflush(stdin);

                printf("\nEnter The Sport :");
                gets(Team[i].sport);

                printf("Enter The Team Name :");
                gets(Team[i].name);

                printf("Enter The Coach name :");
                gets(Team[i].cinfo.name);

                printf("Enter Coach Age :");
                scanf("%d",&Team[i].cinfo.age);

                printf("Enter Coach Experience(in years) :");
                scanf("%d",&Team[i].cinfo.experience);

                printf("\n==================");
                printf("\n1.Add Another");
                printf("\n2.back");
                printf("\n==================");
                printf("\nEnter Your Choice :");
                scanf("%d",&choice1);
                i++;
            } while (choice1!=2);
            
        }
        else if(choice==4)
        {
            printf("\nEnter The Team Name :");
            fflush(stdin);
            gets(find);
            for(y=0;y<=i;y++)
            {
                if(strcmp(Team[y].name,find)==0)
                {
                    printf("\n===============Team %s===============",Team[y].name);
                    printf("\nSport Name        :%s",Team[y].sport);
                    printf("\nTeam Name         :%s",Team[y].name);
                    printf("\nCoach Name        :%s",Team[y].cinfo.name);
                    printf("\nCoach Age         :%d",Team[y].cinfo.age);
                    printf("\nCoach Experience  :%d years",Team[y].cinfo.experience);
                    printf("\n=====================================");
                    printf("\nEnter New Coach Name :");
                    gets(Team[y].cinfo.name);
                    printf("Enter Coach Age :");
                    scanf("%d",&Team[y].cinfo.age);
                    printf("Enter Coach Experience(in years) :");
                    scanf("%d",&Team[y].cinfo.experience);
                }
            }
            if(y==i+1)
            {
                printf("\nTeam Not Found !");
            }           
        }
        else if(choice==5)
        {
            printf("\nThank you !");
        }
        else
        {
            printf("\nPlease,Enter a Valid Choice !");
        }
    }while(choice!=4);
}