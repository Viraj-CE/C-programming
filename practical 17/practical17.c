#include<stdio.h>
void main ()
{
    float d=0.5;
    int t=1;
   while(d<=10)
   {
       printf("Minute %1d :Distance Covered = %.1f\n",t,d);

       if(d==10)
       {
           printf("\"Marathon Is Complete\"");
       }
       d+=0.5;
       t++;
   }
}
