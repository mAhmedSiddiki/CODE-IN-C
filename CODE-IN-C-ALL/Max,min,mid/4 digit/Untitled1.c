#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b&&a<c&&a<d)
    {
        printf("A=%d is minimum\n",a);
    }
    else if(b<a&&b<c&&b<d)
    {
        printf("B=%d is minimum\n",b);
    }
    else if(c<a&&c<b&&c<d)
    {
        printf("C=%d is minimum\n",c);
    }
    else if(d<a&&d<b&&d<c)
    {
        printf("D=%d is minimum\n",d);
    }



    if(a>b&&a>c&&a>d)
    {
        printf("A=%d is maximum\n",a);
    }
    else if(b>a&&b>c&&b>d)
    {
        printf("B=%d is maximum\n",b);
    }
    else if(c>a&&c>b&&c>d)
    {
        printf("C=%d is maximum\n",c);
    }
    else if(d>a&&d>b&&d>c)
    {
        printf("D=%d is maximum\n",d);
    }



    return 0;
}
