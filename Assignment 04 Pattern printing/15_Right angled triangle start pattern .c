#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 4 , i, j;

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" * ");
        }

        printf("\n");
    }
    
    getch ();
    return 0;
}