#include<stdio.h>
#include<conio.h>

int main()
{
    int no, digit, even = 0, odd = 0, zero = 0;

    printf("Enter number");
    scanf("%d", &no);

    while(no > 0)
    {
        digit = no % 10;

        if(digit == 0)
        {
            zero++;
        }
        else if(digit % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        no = no / 10;
    }

    printf("E = %d , O = %d , Z = %d", even, odd, zero);
    
    getch ();
    return 0;
}