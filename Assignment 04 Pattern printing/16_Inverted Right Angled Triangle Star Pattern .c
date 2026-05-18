#include<stdio.h>

int main()
{
    int Row = 4 ,i, j;

    for(i = Row; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    
    getch ();
    return 0;
}