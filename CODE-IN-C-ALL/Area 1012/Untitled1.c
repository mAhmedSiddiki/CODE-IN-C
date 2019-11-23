#include<stdio.h>
#define pi 3.14159

int main()
{
    float a,b,c,d,e,f,g,h;
    scanf("%f%f%f",&a,&b,&c);

    d=0.5*(a*c);
    e=pi*(c*c);
    f=(a+b)/2*c;
    g=b*b;
    h=a*b;

    printf("TRIANGULO: %0.3f\n",d);
    printf("CIRCULO: %0.3f\n",e);
    printf("TRAPEZIO: %0.3f\n",f);
    printf("QUADRADO: %0.3f\n",g);
    printf("RETANGULO: %0.3f\n",h);





    return 0;
}
