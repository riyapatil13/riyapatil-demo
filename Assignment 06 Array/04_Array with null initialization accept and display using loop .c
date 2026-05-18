#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[7] = {0};

    printf("Enter 7 Elements:\n");

    for(int i = 0; i < 7; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array Elements:\n");

    for(int i = 0; i < 7; i++)
    {
        printf("%d ",arr[i]);
    }
    
    getch ();
    return 0;
}