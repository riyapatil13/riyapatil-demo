#include<stdio.h>
#include<conio.h>


int main()
{
    int arr[5], i;
    int even = 0, odd = 0, zero = 0;

    printf("Enter 5 Elements");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == 0)
        {
            zero++;
        }
        else if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even Count = %d\n", even);
    printf("Odd Count = %d\n", odd);
    printf("Zero Count = %d", zero);
    
    getch ();
    return 0;
}