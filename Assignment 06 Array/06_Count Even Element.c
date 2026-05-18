#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5], i, count = 0;

    printf("Enter 5 Elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("Even Count = %d", count);
    
    getch ();
    return 0;
}