#include<stdio.h>
#include<math.h>
int main()
{
	int dec,octal=0;
	printf("enter a decimal number: ");
	scanf("%d",&dec);
	int i=1;
	while(dec!=0)
	{
		octal=octal+(dec%8)*i;
		dec=dec/8;
		i=i*10;
	}
	printf("the octal number is:%d",octal);
}

