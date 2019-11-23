#include<stdio.h>
int main()
{
    int ara[100];
    int x,i,j;
    float k,a;
    printf("How many subject you calculate:\n");
    scanf("%d",&x);
    printf("Enter your subject number:\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<x;i++)
    {
        k=ara[i]+k;
    }

    j=x*100;
    a=k/x;


    printf("\n\t\t\t Total number: %.2f / %d\n",k,j);
    printf("\t\t\tAverage number: %.2f",a);

    if(a>=80&&a<=100)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tA+\t4.00\t\tOutstanding\n");
    }
    else if(a>=75&&a<=79)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tA\t3.75\t\tExcellent\n");
    }
    else if(a>=70&&a<=74)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tA-\t3.50\t\tVery Good\n");
    }
    else if(a>=65&&a<=69)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tB+\t3.25\t\tGood\n");
    }
    else if(a>=60&&a<=64)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tB\t3.00\t\tSatisfactory\n");
    }
    else if(a>=55&&a<=59)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tB-\t2.75\t\tAbove Average\n");
    }
    else if(a>=50&&a<=54)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tC+\t2.50\t\tAverage\n");
    }
    else if(a>=45&&a<=49)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tC\t2.25\t\tBelow Average\n");
    }
    else if(a>=40&&a<=44)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tD\t2.00\t\tPass\n");
    }
    else if(a>=00&&a<=39)
    {
        printf("\n\n\t\t\tGrade\tGrade Point\tRemarks\n\t\t\tF\t0.00\t\tFall\n");
    }


    return 0;
}
