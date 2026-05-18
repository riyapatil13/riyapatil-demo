#include<conio.h>
#include<stdio.h>

int main()
{
    int no, digit, mult = 1;

    printf("Enter number : ");
    scanf("%d", &no);

    while(no > 0)
    {
        digit = no % 10;
        mult = mult * digit;
        no = no / 10;
    }

    printf("Multiplication = %d", mult);
    
    getch ();
    return 0;
}