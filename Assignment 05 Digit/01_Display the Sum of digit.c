#include<stdio.h>
#include<conio.h>

int main()
{
    int Num , dSum = 0, Temp = 0, Dig = 0;

    printf("\n Enter the Number");
    scanf("%d",&Num);  

    Temp = Num;

    while(Temp > 0)
    {
        Dig  = Temp % 10;
		dSum = dSum + Dig;
		Temp = Temp / 10;
    }

    printf("\n Sum Of Digits %d = %d.", Num, dSum);

    getch ();
    return 0;
}