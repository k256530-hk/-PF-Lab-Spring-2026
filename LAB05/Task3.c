#include<stdio.h>
int main()
{
	int vehicletype;
	int hours;
	int parkingtype;
	int charge;
	double fees;
	printf("===Main vehicle Type===\n");
	printf("1.Car\n");
	printf("2.Bike\n");
	printf("3.Bus\n");
	printf("Enter your vehicle type\n:");
	scanf("%d",&vehicletype);
	printf("Enter no.of hours parked\n:");
	scanf("%d",&hours);
	switch(vehicletype){
		case 1:
			printf("==Parking Type==\n");
			printf("1.Regular parking\n");
			printf("2.VIP parking\n");
			printf("Enter your parking type:\n");
			scanf("%d",&parkingtype);
			switch(parkingtype){
				case 1:
					charge=50;
				case 2:
				    charge=100;	
			}
		break;
		case 2:
		    printf("==Parking Type==\n");
			printf("1.Regular parking\n");
			printf("2.Premium\n");
			printf("Enter your parking type:\n");
			scanf("%d",&parkingtype);
			switch(parkingtype){
				case 1:
					charge=20;
				case 2:
				    charge=40;
				}
		break;
		case 3:		
			charge=200;	
		break;
		default:
		printf("Invalid Parking Type/n");	
	}
	           fees=charge*hours;
	printf("Your total parking fees:%.4lf",fees);
	return 0;
}
