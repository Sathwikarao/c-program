#include<stdio.h>
int main()
{
	int m;
	printf("enter the marks of student =");
	scanf("%d",&m);
	if(m>=80)
	{
		printf("student got A grade");
	}
	else if(m>=60)
	{
		printf("student got B grade");
	}
	else if(m>=40)
	{
		printf("student got C grade");
	}
	else if(m<40)
	{
		printf("student failed");
	}
}
