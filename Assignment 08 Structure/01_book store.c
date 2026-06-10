#include<stdio.h>
struct student

{
    char title[20];
    char Author[30];
    int no_of_copies;
    float price_per_copy;
    float tprice;
}

bs[5]=
{
    {"c program","v.patil",2,250.00},
    {"c++ program","S.jadhav",2,350.00},
    {"Data structure","p.pawar",3,200.00},
    {"Data science","N.patil",2,550.00},
    {"software engineer","v.mane",4,450.00},
};

int main()
{
    int i;
    float tamt; 
    
    for (i=1;i<=4;i++)
    {
        bs[i].tprice = bs[i].no_of_copies *bs[i].price_per_copy;
        tamt = tamt + bs[i].tprice;
        printf ("\n book title %d:%s",i,bs[i].title);    
        printf ("\n book Author %d:%s",i,bs[i].Author);    
        printf ("\n book of copies %d:%d",i,bs[i].no_of_copies);
        printf ("\n book price per copy %d:%.2f",i,bs[i].price_per_copy);
        printf ("\n book tprice %d :%.2f",bs[i].tprice);    
        printf("\n ======================================");    
    }
    
    
    printf("\n Total amount:%.2f",tamt);
    
    return 0;
}