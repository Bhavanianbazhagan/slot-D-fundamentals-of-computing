#include<stdio.h>
int main()
{
	int n,i;
	int n1=0,n2=1,n3;
	printf("enter n value:");
	scanf("%d",&n);
	printf("%d",n1,"%d",n2);
	for(i=3;i<=n;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d",n3);
	}
}
