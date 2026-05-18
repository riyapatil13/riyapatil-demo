#include<stdio.h>
#include <conio.h >

int main()
{
    int no, digit, count;

    printf("Enter number");
    scanf("%d", &no);

    while(no > 0)
    {
        digit = no % 10;

        if(digit == 0)
        {
            count++;
        }

        no = no / 10;
    }

    printf("zero digit = %d", count);

    getch ();
    return 0;
}