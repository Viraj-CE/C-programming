#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
struct Account {
    char Name[100];
    int acnum;
    char pin[4];
    float amount;
};
int userExist(char *name){
    FILE *fp;
    fp=fopen("User.txt","r");
    if(fp==NULL) printf("File Not Found !");
    int ac;
    char fileName[100];
    char pin[10];    
    float amt;  

    while(fscanf(fp, "%[^,],%d,%[^,],%f",fileName,&ac, pin, &amt) != EOF) {
        if(strcmp(fileName, name) == 0) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
}
void RegisterUser(){
    struct Account User;
    srand(time(NULL));
    User.acnum = rand() % 900000 + 100000;
    User.amount=0;
b:  printf("Enter The Account Owner's Name :");
    getchar();
    scanf("%[^\n]", User.Name);
    if(userExist(User.Name)){
        printf("User Already Exist\n");
        goto b;
    }
a:  printf("Enter The PIN :");
    scanf("%s",&User.pin);
    userExist(User.Name);
    if(strlen(User.pin)!=4){
        printf("PIN contains Only 4 Digits !\n");
        goto a;
    }
    int valid = 1;
    for(int i=0; i<4; i++) {
        if(User.pin[i] < '0' || User.pin[i] > '9') {
            valid = 0;
            break;
        }
    }

    if(valid==0){
        printf("Enter Only Digits !\n");
        goto a;
    }
    else {

        printf("\n----------------------------");
        printf("\n1Congratulations, Your Account Has Been Registered Successfully !");
        printf("\nAccount Owner  :%s",User.Name);
        printf("\nAccount Number :%d",User.acnum);
        printf("\nAccount PIN    :%s",User.pin);
        printf("\nDO NOT SHARE THIS TO ANYONE !");
        printf("\n----------------------------");
    }
    FILE *fp;
    fp=fopen("User.txt","a");
    fprintf(fp,"%s,%d,%s,%.2f\n",User.Name,User.acnum,User.pin,User.amount);
    fclose(fp);
};
int Login(int acnum,char *pass){
    FILE *fp;
    fp=fopen("User.txt","r");
    if(fp==NULL){
        printf("File Not Found");
    }
    int ac;
    char fileName[100];
    char pin[10];    
    float amt;  

    while(fscanf(fp, "%[^,],%d,%[^,],%f",fileName,&ac, pin, &amt) != EOF) {
        if(strcmp(pin,pass) == 0) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
}
User(int acnum,char *pin){
    
}
void main(){
    int choice;
    long double acnum;
    char pin[4];
M1: printf("-----Welcome To Our ATM-----");
    printf("\n1.Register");
    printf("\n2.Login");
    printf("\n3.Exit");
    printf("\n----------------------------");
    printf("\nEnter Youur Choice :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        RegisterUser();
        goto M1;
        case 2:
        printf("Enter Account Number :");
        scanf("%ld",&acnum);
        printf("Enter PIN :");
        scanf("%s",&pin);
        long double r=Login(acnum,pin);
        if (r==1)
        {   
            printf("Logged In Successfully !");
            User(acnum,pin);
        }
        
        goto M1;
    }
}