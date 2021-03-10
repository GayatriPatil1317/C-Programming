#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()

{
    int i,Arr[size]={},max=0,max2nd=0;   //Null Initialization

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

       if(Arr[i]>max)
        {
           max=Arr[i];
        }

    }
    for(i=0;i<size;i++)
    {
        if(Arr[i]>max2nd&&Arr[i]<max)
        {
            max2nd=Arr[i];
        }
    }

     printf("\n Maximum Element From Given Array is=%d",max);
     printf("\n 2ndMaximum Element From Given Array is=%d",max2nd);

    getch();
    return 0;

}
