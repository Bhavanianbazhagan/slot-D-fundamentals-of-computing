#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("before swapping...\n");
	printf("enter first number: ");
	scanf("%d",&num1);
	printf("enter second number: ");
	scanf("%d",&num2);
	num3=num1;
	num1=num2;
	num2=num3;
	printf("after swapping...\n");
printf("first number: %d",num1);
printf("second number: %d",num2);
}
