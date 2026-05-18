#include<stdio.h>
#include<conio.h>

int main()
{
    int no, digit;

    printf("Enter number : ");
    scanf("%d", &no);

    while(no > 0)
    {
        digit = no % 10;
        printf("%d", digit);
        no = no / 10;
    }
    
    getch ();
    return 0;
}