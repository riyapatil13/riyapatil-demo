#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c ", ch);
            ch++;
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c ", ch);
            ch--;
        }
    }
    else
    {
        printf("Invalid Letter");
    }
    
    getch ();    
    return 0;
}