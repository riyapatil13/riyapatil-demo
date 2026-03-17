#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0;

    printf("\n ASCII Table");

    while(i <=127)
    {
        printf("\n\t  %d :'%c' ",i, i);
        i++;
    }    

    getch();
    return 0;
}