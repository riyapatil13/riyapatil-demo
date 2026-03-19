#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ;

    printf("\n Enter a Character : ");
    ch = getche();
    

    if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("\n The  Letter %c is Vowel",ch);
    }
    else if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    {
        printf("\n\ The  Letter %c is Consonant",ch);
    }
    else
    {
        printf("\n The  Letter %c is not Alphabet", ch);
    }

    getch();
    return 0;
}