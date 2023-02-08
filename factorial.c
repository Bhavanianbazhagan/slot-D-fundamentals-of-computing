#include<stdio.h>
int main()
{
	int fact=1,n;
	int i;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	 printf("the factorial of %d is: %d",n,fact);
	 return 0;
}
