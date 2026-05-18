#include<stdio.h>
#include<conio.h>

int main()
{
    int no, digit, count = 0;

    printf("Enter number ");
    scanf("%d", &no);

    while(no > 0)
    {
        digit = no % 10;

        if(digit == 2)
        {
            count++;
        }

        no = no / 10;
    }

    printf("Frequency of 2 = %d", count);
    
    getch ();
    return 0;
}