#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()

{
    int i,Arr[size]={},min=0;   //Null Initialization

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

    min=Arr[0];
    for(i=0;i<size;i++)
    {
       if(min>Arr[i])
        {
           min=Arr[i];
        }

    }

     printf("\n Minimum Element From Given Array is=%d",min);

    getch();
    return 0;

}
