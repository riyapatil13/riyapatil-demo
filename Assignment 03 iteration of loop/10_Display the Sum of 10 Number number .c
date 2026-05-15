#include<stdio.h>
#include<conio.h>
int main() 
{
    int i, num, sum = 0;

    printf("\nEnter 10 numbers");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("Sum of  = %d", sum);
    
    getch ();
    return 0;
}