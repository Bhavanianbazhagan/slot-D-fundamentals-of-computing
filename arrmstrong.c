#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	int num=0;
	printf("enter a number: ");
	scanf("%d",&n);
	int number;
	number=n;
   for(number=n;number!=0;++num)
   {
   	number=number/10;
   }
   for(number=n;number!=0;number=number/10)
   {
   	rem=number%10;
   	sum=sum+pow(rem,num);
   }
   if(sum==n)
   {
   	printf("is an armstrong number: %d",n);
   }
   else
   {
   	printf("is not an armstrong number: %d",n);
   }
}
