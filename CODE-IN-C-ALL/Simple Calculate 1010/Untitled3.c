#include<stdio.h>
int main()
{
    int code,unit,codee,unitt;
    float price,pricee,valor;
    scanf("%d%d%f",&code,&unit,&price);
    scanf("%d%d%f",&codee,&unitt,&pricee);

    valor = (unit*price)+(unitt*pricee);

    printf("VALOR A PAGAR: R$ %.2f\n",valor);



    return 0;
}
