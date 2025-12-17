#include<stdio.h>
int main()
{
   int a[5]={153,370,123,908};
   int temp=0;
   int reversed=0;
   int count=0;
   for (int i=0; i<5; i++)
   {
    count=0;
    reversed=0;
    temp=0;
    while(a[i]!=0)
    {
        temp=a[i]%10;
        count+=temp*temp*temp*temp*temp;
        
    }
    if (count==a[i])
    {
        printf("%d is an Armstrong number\n",a[i]);
    }
    else
    {
        printf("%d is not an Armstrong number\n",a[i]);
    }
   }
   return 0;    
   
}