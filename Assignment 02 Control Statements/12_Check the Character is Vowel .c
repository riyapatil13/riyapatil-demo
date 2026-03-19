#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';
    printf("\n Enter the Character");
    scanf("%c",&ch);
    
    if(ch == 'A' || ch  == 'E' || ch == 'I' || ch =='O' || ch == 'U'|| ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch  == 'u')
    {
    printf("\nThe Character is Vowel");
    }
    else
    {
    printf("\n The Character is not a Vowel");
    }
    
    getch ()
    return 0;
}