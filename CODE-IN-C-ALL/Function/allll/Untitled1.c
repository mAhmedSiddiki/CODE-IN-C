#include<stdio.h>

void summ(int x,int y)
{
    int sum=x+y;
    printf("Sum = %d\n",sum);
}

void subb(int x,int y)
{
    int sub=x-y;
    printf("Sub = %d\n",sub);
}

void mult(int x,int y)
{
    int mul=x*y;
    printf("Mult = %d\n",mul);
}

void divd(int x,int y)
{
    int div=x/y;
    printf("Divd = %d\n",div);
}

void modu(int x,int y)
{
    printf("\nShow even odd\n");
    int modu=x+y;
    if(modu%2==0)
    {
        printf("%d is Enen\n",modu);
    }
    else
    {
        printf("%d is Odd\n",modu);
    }
}

void maxmin(int x,int y)
{
    printf("\nShow maxi or min\n");

    if(x<y)
    {
        printf("%d is Maximum\n",y);
    }
    else
    {
        printf("%d is Minimum\n",x);
    }
}



void main()
{
    int x,y;
    printf("Enter the value of X and Y\n");

    scanf("%d%d",&x,&y);

    summ(x,y);
    subb(x,y);
    mult(x,y);
    divd(x,y);
    modu(x,y);


}
