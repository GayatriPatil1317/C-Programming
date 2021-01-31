#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Dsum=0,Temp=0;

    printf("Enter an Integer No to calculate Digit Sum:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Number is invalid");return-1;
    }
    while(Temp>0)
    {
        Dig=Temp%10;
        Dsum=Dig+Dsum;
        Temp=Temp/10;
    }
    printf("sum of digits in given number %dis=%d",No,Dsum);

    getch();
    return 0;
}
