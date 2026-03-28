#include<stdio.h>
#include<conio.h>
int main ()
{
    int Num,Temp ;
    long long fact;
    
    printf("\n\tEnter the Number");
    scanf("%d",&Num);
    
    if(Num<=0)
    {
        printf("\n Invalid output");
        return -1;
    }
    
    for(fact=1,Temp=Num;Temp>1;Temp--)
    
    {
        fact=fact*Temp;
    }
    
    printf("\n Factorial of %d is =%lld",Num,fact);
    
    getch();
    return 0;
    
}