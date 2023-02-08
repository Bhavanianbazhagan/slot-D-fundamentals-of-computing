#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	int i;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,3);
	}
		printf("%d",sum);
}
