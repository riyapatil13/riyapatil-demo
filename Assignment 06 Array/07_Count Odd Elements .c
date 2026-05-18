#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5], i, count = 0;

    printf("Enter 5 Elements");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count++;
        }
    }

    printf("Odd Count = %d", count);
    
    getch ();
    return 0;
}