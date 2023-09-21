#include<stdio.h>
int RangeSum(int iNo1,int iNo2)
{
if(iNo1<=0)
    {
iNo1=-iNo1;
 
 
    }


   if(iNo2<=0)
    {
iNo2=-iNo2;
 
 
    }
if(iNo1>iNo2)
    {


        printf("invalid range\n");
    }
    
 
 int i=1;int iAns=0;
 for(i=iNo1;i<=iNo2;i++)
 {
iAns=iAns+i;

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

iRet=RangeSum(iValue,iValue2);
printf("addition is %d",iRet);
    return 0;
}
    