#include<stdio.h>
#include<conio.h>

int main()
{
    int iRow = 5, iCol = 4 , i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    getch ();
    return 0;
}