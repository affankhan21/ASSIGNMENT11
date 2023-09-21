#include<stdio.h>
int RangeSumEven(int iNo1,int iNo2)
{
     if(iNo1%2!=0)
    {
        iNo1++;
    }

    if(iNo2%2!=0)
    {
        iNo2--;
    }


if(iNo1=-iNo1&&iNo2==iNo2)
    {


        printf("invalid range\n");
    }
   
    
 
 int i=1;int iAns=0;
 for(i=iNo1;i<=iNo2;i++)
 {
    if(i%2==0)
    {
iAns=iAns+i;
    }
 }
return iAns;

}


int main()
{


int iValue=0,iValue2=0,iRet=0;
printf("enter starting point:\n");
scanf("%d",&iValue);
printf("enter ending point:\n");
scanf("%d",&iValue2);

iRet=RangeSumEven(iValue,iValue2);
printf("addition is %d",iRet);
    return 0;
}
    