#include<stdio.h>
void main()
{
	int a,n,n1;
	printf("enter the number");
	scanf("%d",&n);
	
	n1=n;
	
	while(n!=0)
	{
		n=n/10; a=a+1;
	}

printf(" number of digits in  %d are %d",n1,a);
	
	} 
