#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 4, Col = 4 , i, j, no;

    for(i = 1; i <= Row; i++)
    {
        no = i * 5;

        for(j = 1; j <= Col; j++)
        {
            printf(" %d ", no);
            no = no + 25;
        }

        printf("\n");
    }
    
    getch ();
    return 0;
}