#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d%d",&x,&y);

    z=x+y;
    a=x-y;
    b=x*y;
    c=x/y;

    printf("Add: %d + %d = %d\t",x,y,z);
    if (z>=0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }


    printf("Sub: %d - %d = %d\t",x,y,a);
    if (a>=0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }

    printf("Mul: %d * %d = %d\t",x,y,b);
    if (b>=0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }


    printf("Sub: %d / %d = %d\t",x,y,c);
    if (c>=0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }



    return 0;
}
