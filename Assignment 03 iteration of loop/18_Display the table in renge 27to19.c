#include <stdio.h>
#include <conio.h >

int main()
{
    int i, j;

    for(i = 27; i >= 19; i--)
    {
        printf("\nTable of ");

        for(j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    getch();
    return 0;
}