#include<stdio.h>
int main()
{
    char chr;
    scanf("%c",&chr);
    if(chr>='a'&&chr<='z'||chr>='A'&&chr<='Z')
    {
        printf("Alfabetic\n");
    }
    else if(chr>='0'&&chr<='9')
    {
        printf("Number\n");
    }
    else
    {
        printf("Special character\n");
    }


    return 0;
}
