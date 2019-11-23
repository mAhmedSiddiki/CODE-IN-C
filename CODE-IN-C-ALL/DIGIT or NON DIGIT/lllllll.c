#include<stdio.h>
int main()
{
    char chr;
    scanf("%c", &chr);

    if(chr>='0'&&chr<='9'){
        printf("Digit");
    }
    else{
        printf("Not a digit");
    }
    return 0;
}
