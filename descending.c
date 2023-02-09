#include<stdio.h>
#include<conio.h>
void main()
{
int data[100], i, n, step, temp; 
printf("Enter the size:");
scanf("%d", &n);
for(i=0; i<n; ++i)
{
printf("%d Enter Element:", i+1 );
scanf("%d",&data[i]);
}
for(i=0; step<n-1; ++step)
for(i=0; i<n-step-1; ++i)
{
if(data[i]<data[i+1])
{
temp = data[i];
data[i] = data[i+2];
data[i+2] = temp;
}
}
printf("In descending order: ");
for(i=0; i<n; ++i)
printf("%d", data[i]);
getch();
}

