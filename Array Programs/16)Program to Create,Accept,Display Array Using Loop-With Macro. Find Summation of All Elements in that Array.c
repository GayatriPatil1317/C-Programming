#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

int main()

{
    int i,Arr[size]={},sum=0;   //Null Initialization

    printf("\n Accept Array Elements=>");

    printf("\n\n============*******============\n");

    for(i=0;i<size;i++)
    {
       printf("\n Enter Value of %d Element=",i+1);
       scanf("%d",&Arr[i]);
    }


    system("cls");


    printf("\n Display Array Elements=>");

    printf("\n\n============*******============");

    for(i=0;i<size;i++)
    {
        printf("\n Value of %d Element=%d",i+1,Arr[i]);
    }

    printf("\n\n============*******============");

    for(i=0;i<size;i++)
    {
        sum+=Arr[i];
    }

    printf("\n Summation of All Elements in Array=%d",sum);

    getch();
    return 0;

}
