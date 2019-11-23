#include<stdio.h>
int main()
{
    printf("Area of Triangle\n\n");
     int a,b;
    float c;
    printf("Please enter the value of Horizontal and then Vertical\n");
    scanf("%d%d",&a,&b);
    c=0.5*(a*b);
    printf("Ans: Area of Triangle:\n1/2(%d * %d) is = %f\n\n",a,b,c);
    printf("<<<<<< Thanks,,,using my software >>>>>\n");
    return 0;
}
