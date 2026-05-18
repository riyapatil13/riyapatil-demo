#include<stdio.h>
#include<conio.h>

int main()
{
    int no, temp, digit, rev = 0;

    printf("Enter number : ");
    scanf("%d", &no);

    temp = no;

    while(temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if(no == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    getch ();
    return 0;
}