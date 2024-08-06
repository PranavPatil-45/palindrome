#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rev=0,ld,temp;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	temp = n;
	
	while(n>0)
	{
		ld = n % 10;
		n = n/10;
		rev = (rev * 10) + ld;
	}
	
	
	if(rev==temp)
	{
		printf("number is palindrom !");
	}
	else
	{
		printf("number is not palindrom !");
	}
	
	
	
}