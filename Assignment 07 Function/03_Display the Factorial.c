#include<stdio.h>
#include<conio.h>


int main()
{
    int no, i;
    int fact = 1;

    printf("Enter  the Number ");
    scanf("%d", &no);

    for(i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of = %d", fact);
    
    getch ();
    return 0;
}