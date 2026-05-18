#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 5, Col = 4 , i, j;
    char ch = 'A';

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Col; j++)
        {
            printf(" %c ", ch);
            
        }
        printf("\n");
    }

    getch ();
    return 0;
}