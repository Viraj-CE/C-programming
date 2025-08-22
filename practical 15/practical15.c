#include<stdio.h>
void main()
{
    int a;
    printf("Enter The Value Of Countdown :");
    scanf("%d",&a);
    for(a;a>=0;a--)
    {
        printf("\n\aTime Left :%d Seconds",a);
        sleep(1);
    }
}
