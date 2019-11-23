#include<stdio.h>
#define pi 3.14159

int main()
{
    float a;
    double VOLUME;
    scanf("%f",&a);

    VOLUME=(4/3.0)*pi*(a*a*a);

    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;
}

