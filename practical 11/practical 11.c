//Grade Calculator
#include<stdio.h>
void main()
{
    float m;
    printf("Enter Your Marks :");
    scanf("%f",&m);
    m<=100
    ?
        m>=90
        ?
        printf("Your Grade Is A")
        :
            m>=80 && m<90
            ?
            printf("Your Grade IS B")
            :
                m>=70 && m<80
                ?
                printf("Your Grade is C")
                :
                    m>=60 && m<70
                    ?
                    printf("Your Grade IS D")
                    :
                    printf("Your Grade IS F")
    :
        printf("Please Enter Valid Marks");
}
