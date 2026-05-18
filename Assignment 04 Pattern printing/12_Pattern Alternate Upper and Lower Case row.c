#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 5, Col = 4 , i, j;

    for(i = 1; i <= Row; i++)
    {
        if(i % 2 == 1)
        {
            char ch = 'A';

            for(j = 1; j <= Col; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        else
        {
            char ch = 'a';

            for(j = 1; j <= Col; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }

        printf("\n");
    }

    getch ();
    return 0;
}