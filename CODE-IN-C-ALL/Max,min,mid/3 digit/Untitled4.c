#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    if(x>y&&x>z)
    {
        printf("X is maximum\n");
    }
    else if(y>x&&y>z)
    {
        printf("Y is maximum\n");
    }
    else if(z>x&&z>y)
    {
        printf("Z is maximum\n");
    }






    if((x<y&&y<z)||(x>y&&y>z))
    {
        printf("Y is middle\n");
    }
    else if((y<x&&x<z)||(y>x&&x>z))
    {
        printf("X is middle\n");
    }
    else if((x<z&&z<y)||(x>z&&z>y))
    {
        printf("Z is middle\n");
    }






    if(x<y&&x<z)
    {
        printf("X is minimum\n");
    }
    else if(y<x&&y<z)
    {
        printf("Y is minimum\n");
    }
    else if(z<x&&z<y)
    {
        printf("Z is minimum\n");
    }



    return 0;
}
