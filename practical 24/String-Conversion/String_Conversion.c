#include<stdio.h>
void main()
{
    char str1[50],l=0,strrev[50],str2[50],c,cpy[50],strcon[100];
    printf("Enter String 1 :");
    gets(str1);
    //Length of the string
    for(int i=0;str1[i]!='\0';i++)
    {
      l++;
    }
    printf("Length Of The String 1 is :%d\n",l);
    //reverse of string 
    strrev[l]='\0';
    for(int i=0;str1[i]!='\0';i++)
    {
        strrev[l-i-1]=str1[i];
    }
    printf("Reverse of the string 1 is :%s\n",strrev);
    //Comparing two strings 
    printf("Enter String 2 :");
    gets(str2);
    for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            c=1;
            break;
        }
        else 
        {
            c=0;
        }
    }
    if(c==0)
    {
        printf("String 1 and String 2 Are Equal");
    }
    else
    {
        printf("String 1 And String 2 are Not Equal");
    }
    //copy string 
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        cpy[i]=str1[i];
    }
    cpy[i]='\0'; //terminated the copied string
    printf("\nBackup of string 1 :%s",cpy);
    //concatenate of string 1 and string 2
    i = 0;
    int j = 0;
    // Copy str1 to strcon
    while(str1[i] != '\0') {
        strcon[i] = str1[i];
        i++;
    }
    // Copy str2 to strcon after str1
    while(str2[j] != '\0') {
        strcon[i] = str2[j];
        i++;
        j++;
    }
    strcon[i] = '\0'; // Null terminate
    printf("\nConcatinated String Is :%s",strcon);
    //upper case conversion
    char wordu[50];
    printf("\nEnter the String to convert to uppercase :");
    gets(wordu);
    i=0;
    while(wordu[i]!='\0')
    {
        if(wordu[i]>=97 && wordu[i]<=122)
        {
            wordu[i]=wordu[i]-32;
        }
        i++;
    }
    printf("The Converted Sting To UpperCase Is :%s",wordu);
     //Lower case conversion
    char wordl[50];
    printf("\nEnter the String to convert to Lowercase :");
    gets(wordl);
    i=0;
    while(wordl[i]!='\0')
    {
        if(wordl[i]>=65 && wordl[i]<=90)
        {
            wordl[i]=wordl[i]+32;
        }
        i++;
    }
    wordl[i]='\0';
    printf("The Converted Sting To Lower Case Is :%s",wordl);
    // Capitalize only the first letter of a note
    char note[100];
    printf("\nEnter The Note :");
    gets(note);
    int k=1;
    if(note[0]>='a' && note[0]<='z')
        {
            note[0]-=32;
        }
    
    while(note[k]!='\0')
    {
        if(note[k]==' ' && note[k+1]>='a' && note[k+1]<='z')
        {
            note[k+1]-=32;
        }
        k++;
    }
    printf("The Note After Capitilization is :%s",note);
}