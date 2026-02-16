#include<stdio.h>
int main()
{
	int units;
	int customertype;
	double bill=0;
	printf("Enter your units:\n");
	scanf("%d",&units);
	if(units<=100){
		bill=units*10;
		printf("Your bill is %.4lf per unit",bill);
	}
	else if(units<=300){
	printf("===Customer Type===\n");
	printf("1. Domestic\n");
	printf("2. Commercial\n");
	printf("Enter your  customer type(1-2):");
	scanf("%d",&customertype);
	if(customertype==1){
		bill=units*12;
		printf("your bill is %.4lf per unit",bill);
	}
	else{
		bill=units*15;
		printf("your bill is %.4lf per unit",bill);
	}
	}
	else{
		bill=units*20;
		printf("your bill is %.4lf per unit",bill);
	}
	
	return 0;
}
