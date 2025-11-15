#include<stdio.h>
#include<string.h>
int Books=50;
char Library_books[50][100]= {
        "To Kill a Mockingbird",
        "1984",
        "The Great Gatsby",
        "The Catcher in the Rye",
        "Pride and Prejudice",
        "The Lord of the Rings",
        "Harry Potter and the Sorcerer's Stone",
        "The Hobbit",
        "Fahrenheit 451",
        "Moby-Dick",
        "War and Peace",
        "Crime and Punishment",
        "Jane Eyre",
        "Wuthering Heights",
        "The Odyssey",
        "The Iliad",
        "The Brothers Karamazov",
        "One Hundred Years of Solitude",
        "The Alchemist",
        "Brave New World",
        "The Kite Runner",
        "The Book Thief",
        "Animal Farm",
        "The Chronicles of Narnia",
        "Little Women",
        "Dracula",
        "The Picture of Dorian Gray",
        "The Handmaid's Tale",
        "A Tale of Two Cities",
        "Les Miserables",
        "The Grapes of Wrath",
        "The Hitchhiker's Guide to the Galaxy",
        "Catch-22",
        "The Road",
        "Beloved",
        "The Color Purple",
        "The Shining",
        "Gone Girl",
        "The Da Vinci Code",
        "The Girl with the Dragon Tattoo",
        "Sapiens: A Brief History of Humankind",
        "Thinking, Fast and Slow",
        "The Power of Habit",
        "How to Win Friends and Influence People",
        "The Silent Patient",
        "The Secret",
        "Rich Dad Poor Dad",
        "The Little Prince",
        "Memoirs of a Geisha",
        "The Girl on the Train"
    };
char available_books[50][100];
void copy()
{
    for(int i=0;i<50;i++)
    {
        strcpy(available_books[i],Library_books[i]);
    }
}
void displayBooks()
{
    printf("\n----------Available Bookks (%d)----------",Books);
    for(int i=0;i<50;i++)
    {
        printf("\n%d.%s",i+1,Library_books[i]);
    }
}
int getTotalBooks()
{
    return Books;
}
void borrowBook(char* bookName)
{
    for(int i=0;i<50;i++)
    {
        if(strcmp(Library_books[i],bookName)==0)
        {
            if(strcmp(available_books[i],"Borrowed")!=0)
            {
                printf("You Have Borrowed :%s",available_books[i]);
                strcpy(available_books[i], "Borrowed");
                Books-=1;
                return;
            }
            else
            {
                printf("The Book %s is already Borrowed",Library_books[i]);
                return;
            }
        }
    }
}
void returnBook(char* bookName)
{
    for(int i=0;i<50;i++)
    {
        if(strcmp(Library_books[i],bookName)==0)
        {
            if(strcmp(available_books[i],"Borrowed")==0)
            {
                printf("You Have Returned :%s",Library_books[i]);
                strcpy(available_books[i],Library_books[i]);
                Books+=1;
                return;
            }
            else
            {
                printf("The Book %s is already Returned",Library_books[i]);
                return;
            }
        }
    }
}
float calculateFine(int daysLate)
{
    return (daysLate*(float)5) ;
}
void main()
{
    int choice,days;
    float fine=0;
    char bbook[100],rbook[100];
    copy();
    do
    {
        printf("\n----------Welcome To The Library----------");
        printf("\n1.Available Books");
        printf("\n2.Number Of Books Available");
        printf("\n3.Borrow Book");
        printf("\n4.Return Book");
        printf("\n6.Exit");
        printf("\n------------------------------------------");
        printf("\nEnter Your Choice :");
        scanf("%d",&choice);
        getchar();
        if(choice==1)
        {
            displayBooks();
        }
        else if(choice==2)
        {
            printf("\n------------------------------------------");
            printf("\nNumber Of Books Available :%d",getTotalBooks());
            printf("\n------------------------------------------");
        }
        else if(choice==3)
        {
            printf("Enter The Book Name :");
            gets(bbook);
            borrowBook(bbook);
        }
        else if(choice==4)
        {
            printf("Enter The Book Name :");
            gets(rbook);
            printf("EnterThe Number of Overdue Days :");
            scanf("%d",&days);
            fine=calculateFine(days);
            returnBook(rbook);
            printf("\nYour Fine is :Rs.%3.2f",fine);
        }
    }while(choice != 6);
printf("\n25CE012_Chakalashiya Viraj Pareshbhai");
}
