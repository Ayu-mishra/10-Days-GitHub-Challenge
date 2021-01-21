#include<stdio.h>
void main()
{int n,s=0,m;
printf("enter a no.");
scanf("%d",&n);
while(n!=0)
{m=n%10;
s=s*10+m;
n=n/10;
}
printf("reversed value is%d",s);
}
