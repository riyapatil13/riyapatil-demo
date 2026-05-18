#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 5, Col = 4;
    int i, j;

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Col; j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    
    getch ();
    return 0;
}