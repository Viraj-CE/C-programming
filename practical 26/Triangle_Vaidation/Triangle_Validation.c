#include<stdio.h>
#include<math.h>
double Area(double a,double b,double c)
{
    double s;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));//Herons formula
}
void Validation(double x,double y,double z)
{
   if(x+y>z && x+z>y && y+z>x)//the condition of validation of triangle(inequality method)
   {
        printf("The Triangle Is Valid");
        double area=Area(x,y,z);//area calcuation
        printf("\nArea Of The Triangle is :%lf(sq,meters)",area);//print area
   }
   else 
   {
        printf("The Triangle Is Invalid !");
   }
}
void main()
{
    double a,b,c;
    printf("----------Triangle Validation----------");
    printf("\nEnter 1st Side (In Meters):");
    scanf("%lf",&a);//input of 1st side
    printf("Enter 2nd Side (In Meters):");
    scanf("%lf",&b);//input of 2nd side
    printf("Enter 3rd Side (In Meters):");
    scanf("%lf",&c);//input of 3rd side
    Validation(a,b,c);//validating triangle
}