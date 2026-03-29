#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf ("\nEnter the Character");
    scanf ("%c",&ch);
    
    if(ch>='A'&&ch<='Z')
    {
        printf("\n Character is Uppercase Alphabet");
    }
    else if(ch>='a' &&  ch<='z')
    {
        printf("\n Character is lowercase Alphabet");
    }
    else
    {
        printf ("\n It is not Alphabet");   
    }
    
    getch();
    return 0;
}