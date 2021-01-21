#include<stdio.h>
void main()
{
	int marks;
	printf("enter marks: ");
	scanf("%d",&marks);
	
	if ( marks>80 && marks<= 100)
	printf(" \nyour grade is: A");
	
	else if ( marks>60 && marks <= 80 )
	printf("\n your grade is: B ");
	
	else if ( marks > 50 && marks <= 60)
	printf("\nyour grade is: C ");
	
	else if ( marks >45 && marks <= 50)
	printf("\nyour grade is: D");
	
	else if( marks >=25 && marks <= 45)
	printf("\nYour grade is: E");
	
	else if( marks >=0 && marks < 25)
	printf("\nYour grade is: F");
	
	else
	printf("\nmarks are out of limit! please try again and enter marks within limit. \n0<= marks <=100 \nThankyou!");
	
	
	return 0;
}
