#include<stdio.h>
int main()
{
    int x,y,z;
    float c;
    scanf("%d%d",&x,&y);
    z=x+y;
    c=3.1416*z;
    printf("%d + %d = %d and 3.1416 * %d = %.4f",x,y,z,z,c);



    return 0;
}
