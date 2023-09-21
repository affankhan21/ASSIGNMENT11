#include<stdio.h>
void RangeDisplayEven(int iNo1, int iNo2)
{

    if(iNo1%2!=0)
    {
        iNo1++;
    }

    if(iNo2%2!=0)
    {
        iNo2--;
    }

    
int i=1;
for(i=iNo1;i<iNo2;i++)
{



    
    if(i%2==0)
{

    printf("%d\t",i);
}

}




if(iNo1>iNo2)
    {


        printf("invalid range\n");
    }
    if(iNo1=iNo2)

    {
        printf("%d\t",iNo1);
    }



}



int main()
{
int iValue=0,iValue2=0;
printf("enter starting point:\n");
scanf("%d",&iValue);
printf("enter ending point:\n");
scanf("%d",&iValue2);

RangeDisplayEven(iValue,iValue2);
    return 0;
}