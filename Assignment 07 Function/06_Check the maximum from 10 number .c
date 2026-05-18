#include<stdio.h>
#include<conio.h>

int Maximum(int arr[])
{
    int i, max;

    max = arr[0];

    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[10], i, ans;

    printf("Enter 10 Numbers");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    ans = Maximum(arr);

    printf("Maximum Number = %d", ans);
    
    getch ();
    return 0;
}