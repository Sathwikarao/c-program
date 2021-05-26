#include<stdio.h>
int main()
{
	int area,length,breadth,perimeter;
	printf("enter length and breadth");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	printf("area = %d\n",area);
	perimeter=2*(length+breadth);
	printf("perimeter = %d",perimeter);
}
