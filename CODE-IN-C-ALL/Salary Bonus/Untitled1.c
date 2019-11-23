#include<stdio.h>
int main()
{
    char name[30];
    float sa,se,total;
    gets(name);
    scanf("%f%f",&sa,&se);


    total=sa+(se*15)/100;


    printf("TOTAL = R$ %.2f\n",total);



    return 0;
}
