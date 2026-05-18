#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 5 ,i, j;

    for(i = 1; i <= Row; i++)
    {
        char ch = 'A';

        for(j = 1; j <= i; j++)
        {
            printf(" %c ", ch);
            ch++;
        }

        printf("\n");
    }
    
    getch ();
    return 0;
}