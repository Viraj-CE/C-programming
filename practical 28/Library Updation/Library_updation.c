#include <stdio.h>
#include <string.h>
union Book 
{
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued;
};

int main() 
{
    union Book book;
    int tempAccession;
    char tempTitle[100];
    char tempAuthor[100];
    float tempPrice;
    int tempIssued;

    printf("Enter Book Accession Number: ");
    scanf("%d", &tempAccession);

    printf("Enter Book Title: ");
    getchar();
    gets(tempTitle);

    printf("Enter Author Name: ");
    gets(tempAuthor);

    printf("Enter Book Price: ");
    scanf("%f", &tempPrice);

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &tempIssued);
    
    printf("\n--- Book Details ---\n");
    book.accessionNumber = tempAccession;
    printf("Accession Number: %d\n", book.accessionNumber);

    strcpy(book.title, tempTitle);
    printf("Title: %s\n", book.title);

    strcpy(book.author, tempAuthor);
    printf("Author: %s\n", book.author);

    book.price = tempPrice;
    printf("Price: ₹%.2f\n", book.price);

    book.isIssued = tempIssued;
    printf("Status: %s\n", book.isIssued ? "ISSUED" : "AVAILABLE");
    printf("\n25CE012_Chakalashiya Viraj Pareshbhai");
    return 0;
}

