#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5], i, min;

    printf("Enter 5 Elements");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    min = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum = %d", min);
    
    getch ();
    return 0;
}