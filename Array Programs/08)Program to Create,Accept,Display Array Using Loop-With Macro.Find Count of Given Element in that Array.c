#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()

{
    int i,Arr[size]={},src_ele=0,ele_cnt=0;   //Null Initialization

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

    printf("\n Enter Element to Search in Array to Find Out its Count=");
    scanf("%d",&src_ele);

    for(i=0;i<size;i++)
    {
        if(src_ele==Arr[i])
        {
          ele_cnt++;
        }
    }
    printf("\n Count of Element %d in Given Array is=%d",src_ele,ele_cnt);

    getch();
    return 0;

}
