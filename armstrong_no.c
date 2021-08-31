#include<stdio.h>
void main()
{
	int i=0,d,sum=0,num;
	printf("enter a number");
	scanf("%d",&num);
	d=num;
	while(num!=0)
	{
		i=num%10;
		num=num/10;
		sum=sum+i*i*i;
		
	}
if(d==sum)
printf("no is armstrong");
else
printf("no is not armstrong");

} // hi
