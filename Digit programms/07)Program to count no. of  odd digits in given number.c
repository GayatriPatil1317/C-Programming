#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Temp=0,Ocount=0;

    printf("Enter +ve Integer No to Count Odd Digits in it:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Number is invalid");return-1;
    }
    while(Temp>0)
    {
        Dig=Temp%10;
        if(Dig%2==1)
        {
            Ocount++;
        }
        Temp=Temp/10;
    }
    printf("\n Count of Odd digits in given number %dis=%d",No,Ocount);

    getch();
    return 0;
}
