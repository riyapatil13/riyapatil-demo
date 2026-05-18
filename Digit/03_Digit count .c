#include<stdio.h>
#include<conio.h>


int main()
{
    int no, count = 0;

    printf("Enter number ");
    scanf("%d", &no);

    while(no > 0)
    {
        count++;
        no = no / 10;
    }

    printf("Count = %d", count);
    
    getch ();
    return 0;
}