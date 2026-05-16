#include <stdio.h>
#include <conio.h >

int main()
{
    int num, max, min, i;

    printf("Enter 10 numbers:");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);

        if(i == 1)
        {
            max = num;
            min = num;
        }

        if(n > max)
            max = num;

        if(n < min)
            min = num;
    }

    printf("Maximum number = %d", max);
    printf("Minimum number = %d", min);

    getch ();
    return 0;
}