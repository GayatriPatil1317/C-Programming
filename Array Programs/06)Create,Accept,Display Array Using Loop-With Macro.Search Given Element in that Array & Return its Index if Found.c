#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int main()

{
    int i,Arr[size]={},src_ele=0;   //Null Initialization

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

    printf("\n Enter Element to Search in Array=");
    scanf("%d",&src_ele);

    for(i=0;i<size;i++)
    {
        if(src_ele==Arr[i])
        {
          break;
        }
    }
    if(i<size)
    {
        printf("\n Given Element %d Found at %d index",src_ele,i);
    }
    else
    {
       printf("\n Given Element %d Not Found in Array",src_ele);
    }

    getch();
    return 0;

}
