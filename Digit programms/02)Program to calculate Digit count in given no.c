#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Temp=0,Dcount=0;

    printf("Enter +ve Integer No to calculate it's Digit count:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Number is invalid");return-1;
    }
    while(Temp>0)
    {
        Dig=Temp%10;
        Dcount++;
        Temp=Temp/10;
    }
    printf("Count of digits in given number %dis=%d",No,Dcount);

    getch();
    return 0;
}
