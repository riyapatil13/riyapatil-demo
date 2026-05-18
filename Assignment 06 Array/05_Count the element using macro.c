#include<stdio.h>
#include<conio.h>
#define SIZE 5

int main()
{
    int arr[SIZE], i, search, count = 0;

    printf("Enter 5 Elements:\n");

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Element to Count: ");
    scanf("%d",&search);

    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] == search)
        {
            count++;
        }
    }

    printf("Count = %d", count);
    
    getch ();
    return 0;
}