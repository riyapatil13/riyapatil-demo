#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 5, Col = 4, i, j, no = 2;

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Col; j++)
        {
            printf("%d ", no);
            no = no + 2;
        }
        printf("\n");
    }
    
    getch ();
    return 0;
}