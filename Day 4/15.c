#include<stdio.h>

void main()
{
    int n,temp,d,sum=0;

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }

    if(temp==sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}