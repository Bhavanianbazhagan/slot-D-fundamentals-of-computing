#include<stdio.h>
int main()
{
	int age,x;
	printf("enter age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("eligible for voting..");
	}
	else
	{
		x=18-age;
		printf("not eligible for voting...\n");
		printf("after %d he\she is eligible to vote.",x);
	}
}
