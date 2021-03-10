#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{
    int i,Arr[7]={};   //Null Initialization

    printf("\n Accept Array Elements=>");

    printf("\n\n============*******============\n");

    for(i=0;i<7;i++)
    {
       printf("\n Enter Value of %d Element=",i+1);
       scanf("%d",&Arr[i]);
    }


    system("cls");


    printf("\n Display Array Elements=>");

    printf("\n\n============*******============");

    for(i=0;i<7;i++)
    {
        printf("\n Value of %d Element=%d",i+1,Arr[i]);
    }

    printf("\n\n============*******============");

    getch();
    return 0;

}
