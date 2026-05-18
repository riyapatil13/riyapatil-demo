#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5], i, max;

    printf("Enter 5 Elements");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum = %d", max);
    
    getch ();
    return 0;
}