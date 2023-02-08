#include<stdio.h>
int main()
{
	int n,sum=0;
	int i;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
			printf("the sum of even numbers is: %d",sum);
	 return 0;
}
