#include <stdio.h>
#include<conio.h >
int main()
{
    int num,i, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of \n");

    for(i = 10; i>= 1; i--)
    {
        result = num * i;

        printf("%d x %d = %d\n", num, i, result);
    }
    
    getch();
    return 0;
}