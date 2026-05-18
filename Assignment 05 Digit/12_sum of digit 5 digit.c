#include<stdio.h>
#include <conio.h>

int main()
{
    int no, temp, count = 0;
    int digit, sum = 0;

    printf("Enter number");
    scanf("%d", &no);

    temp = no;

    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    if(count == 5)
    {
        while(no > 0)
        {
            digit = no % 10;
            sum = sum + digit;
            no = no / 10;
        }

        printf("Sum = %d", sum);
    }
    else
    {
        printf("Invalid input");
    }
    
    getch ();
    return 0;
}