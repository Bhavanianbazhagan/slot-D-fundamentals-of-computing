#include<stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("%d is neither a positive nos not negative nos \n",n);
	}
	else if(n>0)
	{
		printf("%d its a positive number \n",n);
	}
    else
	{
		printf("%d its a negative number \n",n);
	}
}
