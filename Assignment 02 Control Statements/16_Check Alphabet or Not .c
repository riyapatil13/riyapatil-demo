#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf ("\nEnter the Character");
    scanf ("%c",&ch);
    
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        printf("\n It is TRUE");
    }
    else
    {
        printf("\n It is FALSE");
    }
    
    getch();
    return 0;
}