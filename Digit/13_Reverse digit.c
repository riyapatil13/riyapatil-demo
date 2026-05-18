#include<stdio.h>
#include<conio.h>

int main()
{
    int no, digit, rev = 0;

    printf("Enter number : ");
    scanf("%d", &no);

    while(no > 0)
    {
        digit = no % 10;
        rev = rev * 10 + digit;
        no = no / 10;
    }

    printf("Reverse = %d", rev);
    
    getch ();
    return 0;
}