//Water Level Detector
#include<stdio.h>
void main()
{
    for(int i=0;i<=100;i+=10)
    {
        printf("\nCurrent Water Level Is :%d",i);
        if(i==100)
        {
            printf("\n\"Tank Is Full\"");
        }
    }
}
