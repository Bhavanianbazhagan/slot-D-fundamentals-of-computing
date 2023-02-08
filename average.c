#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	float avg;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	avg=sum/n;
	printf("the sum is: %d\n",sum);
	printf("the average is: %f",avg);
}
