#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    char *ptr;
    printf("Enter The Estimated Size Of Summary :");
    scanf("%d",&n);
    ptr=(char*)calloc(n,sizeof(char));
    printf("Enter The Summary :");
    getchar();
    scanf(" %[^\n]", ptr);
    printf("Stored Summary :%s",ptr);
    printf("\nEnter The Estimated Size Of Modifies String :");
    scanf("%d",&n);
    ptr=(char*)realloc(ptr,n);
    printf("Enter The Modified String :");
    getchar();
    scanf("%[^\n]", ptr);
    printf("Modified String :%s",ptr);
    free(ptr);
}