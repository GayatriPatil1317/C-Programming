#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{
    int Arr[7]={};   //Null Initialization

    printf("\n Accept Array Elements=>");

    printf("\n\n============*******============\n");

    printf("\n Enter Value of 1st Element=");
    scanf("%d",&Arr[0]);
    printf("\n Enter Value of 2nd Element=");
    scanf("%d",&Arr[1]);
    printf("\n Enter Value of 3rd Element=");
    scanf("%d",&Arr[2]);
    printf("\n Enter Value of 4th Element=");
    scanf("%d",&Arr[3]);
    printf("\n Enter Value of 5th Element=");
    scanf("%d",&Arr[4]);
    printf("\n Enter Value of 6th Element=");
    scanf("%d",&Arr[5]);
    printf("\n Enter Value of 7th Element=");
    scanf("%d",&Arr[6]);

    printf("\n\n============*******============\n");

    system("cls");

    printf("\n Display Array Elements=>");

    printf("\n\n============*******============");

    printf("\n Value of 1st Element=%d",Arr[0]);
    printf("\n Value of 2nd Element=%d",Arr[1]);
    printf("\n Value of 3rd Element=%d",Arr[2]);
    printf("\n Value of 4th Element=%d",Arr[3]);
    printf("\n Value of 5th Element=%d",Arr[4]);
    printf("\n Value of 6th Element=%d",Arr[5]);
    printf("\n Value of 7th Element=%d",Arr[6]);

    printf("\n\n============*******============");
    getch();
    return 0;

}
