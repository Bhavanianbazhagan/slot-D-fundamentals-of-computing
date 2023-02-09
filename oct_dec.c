#include<stdio.h>
#include<math.h>
int main()
{
	long int octal,dec=0;
	int i=0;
	printf("enter octal no:");
	scanf("%ld",&octal);
	while(octal!=0)
	{
		dec=dec+(octal%10)*pow(8,i++);
		octal=octal/10;
	}
	printf("the decimal no is: %ld",dec);
	return 0;
}
