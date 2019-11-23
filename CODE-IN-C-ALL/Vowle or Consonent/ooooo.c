#include<stdio.h>
int main()
{
    char chr;
    printf("Enter a character ..... \n");
    scanf("%c", &chr);

    if(chr =='a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' )
    {
        printf("Vowel\n");
    }
    else{
        printf("Consonent\n");
    }


    return 0;
}
