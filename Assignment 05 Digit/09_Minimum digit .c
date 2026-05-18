#include<stdio.h>
#include <conio.h >

int main()
{
    int no, digit, min = 0;

    printf("Enter number");
    scanf("%d", &no);

    while(no > 0)
    {
        digit = no % 10;

        if(digit < min)
        {
            max = digit;
        }

        no = no / 10;
    }

    printf("Minimum digit = %d", max);

    getch ();
    return 0;
}