#include<stdio.h>
void main()
{
	
	int a;
	printf("enter the serial no. of month");
	scanf("%d",&a);
	if( a>0 && a<13)
	{
		if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
		printf( "no of days are 31");
		
		else if (a==4 || a==6 || a==9 || a==11)
		printf("no of days are 30");
		
		else
		printf("no. of days are 28");
		
	}
	
	else
	{
		printf(" abe sathiya gaya hai kya!");
	}
	
	
}
