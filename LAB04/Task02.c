#include<stdio.h>
int main()
{
	int tuc; //toatl units consumed
	printf("Enter your total units consumed");
	scanf("%d",&tuc);
	if(tuc<=100)
	printf("Low usage");
	else if(tuc<300)
	printf("Medium usage");
	else
	printf("High usage");
	return 0;
}
