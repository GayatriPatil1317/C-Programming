#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Temp=0,Ecount=0;

    printf("Enter +ve Integer No to Count Even Digits in it:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Number is invalid");return-1;
    }
    while(Temp>0)
    {
        Dig=Temp%10;
        if(Dig%2==0&&Dig!=0)
        {
            Ecount++;
        }
        Temp=Temp/10;
    }
    printf("\n Count of even digits in given number %dis=%d",No,Ecount);

    getch();
    return 0;
}
