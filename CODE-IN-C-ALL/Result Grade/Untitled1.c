#include<stdio.h>
int main()
{
    int marks,x=1;
    char grade;

    while(x>0)
    {

    system("cls");
    printf("Please enter your marks\n\n");
    scanf("%d", &marks);


    {

            if(marks>=80&&marks<=100)
            {
                grade='A+';
                printf("Your grade is %c\n", grade);
            }

            else if(marks>=70&&marks<=79)
            {
                grade='A';
                printf("Your grade is %c\n", grade);
            }

            else if(marks>=60&&marks<=69)
            {
                grade='A-';
                printf("Your grade is %c\n", grade);
            }

            else if(marks>=50&&marks<=59)
            {
                grade='B';
                printf("Your grade is %c\n", grade);
            }

            else if(marks>=40&&marks<=49)
            {
                grade='C';
                printf("Your grade is %c\n", grade);
            }
            else if(marks>=100){
                printf("Your number is wrong...Please try again...!! \n");
            }

            else
            {
                printf("Your grade is F");
            }
        }
    printf("Exit:\n1.Yes\n2.No");
    scanf("%d",&x);
    if(x==1){
        x=0;
    }
    else if(x==2){
        x=1;
    }


    }

    return 0;
}
