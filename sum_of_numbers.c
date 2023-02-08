#include<stdio.h>
int main()
{
	int n,sum=0;
	int i;
	printf("enter n value: ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	sum=sum+i;
	}
	printf("the sum is: %d",sum);
}
