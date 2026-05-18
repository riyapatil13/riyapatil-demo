#include<stdio.h>
#include<conio.h>

int main()
{
    int No1, No2, No3;
    int i, ans1 = 1, ans2 = 1;

    printf("Enter  the  No1");
    scanf("%d", &No1);

    printf("Enter the No2 ");
    scanf("%d", &No2);

    printf("Enter the No3");
    scanf("%d", &No3);

    for(i = 1; i <= No2; i++)
    {
        ans1 = ans1 * No1;
    }

    for(i = 1; i <= No3; i++)
    {
        ans2 = ans2 * ans1;
    }

    printf("Answer of = %d", ans2);

    getch ();
    return 0;
}