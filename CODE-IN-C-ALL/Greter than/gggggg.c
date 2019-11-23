#include<stdio.h>
int main()
{
    int x;
    printf("Please enter your number\n\n");
    scanf("%d", &x);
    if(x>10){
        printf("%d is greter than 10\n",x);
    }
    else if(x>15){
        printf("%d is greter than 15\n",x);
    }


    return 0;
}
