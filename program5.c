#include<stdio.h>
void RangeDisplayRev(int iNo1,int iNo2)
{

int i=1;
for(i=iNo2;i>=iNo1;i--)
{

    printf("%d\t",i);
}
if(iNo1=iNo2)
{

    printf("%d",iNo1);
}

if(iNo1>iNo2)
{

    printf("INVALID RANGE");
}

}


int main()
{
int iValue1= 0,iValue2=0;
printf("enter starting point :\n");
scanf("%d",&iValue1);
printf("enter ending  point :\n");
scanf("%d",&iValue2);
RangeDisplayRev(iValue1,iValue2);

    return 0;
}