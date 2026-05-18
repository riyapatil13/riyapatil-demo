#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5], i, sum = 0;

    printf("Enter 5 Elements");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);
    
    getch ();
    return 0;
}