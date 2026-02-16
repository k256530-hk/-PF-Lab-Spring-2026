#include<stdio.h>
int main()
{
int menu;
int fastfood;
int desifood;
int rupees;
double bill;
	printf("===MENU===\n");
	printf("1.Fast Food\n");
	printf("2.Desi Food\n");
	printf("Enter your menu\n:");
	scanf("%d",&menu);
	switch(menu){
		case 1:
			printf("==Fast Food==\n");
			printf("1.Burger\n");
			printf("2. Pizza\n");
			printf("Enter your fast food:\n");
			scanf("%d",&fastfood);
			switch(fastfood){
				case 1:
					rupees=500;
				case 2:
				    rupees=1200;	
			}
		break;
		case 2:
		    printf("==Desi Food==\n");
			printf("1.Biryani\n");
			printf("2.Karahi\n");
			printf("Enter your desi food:\n");
			scanf("%d",&desifood);
			switch(desifood){
				case 1:
					rupees=350;
				case 2:
				    rupees=1500;
				}
		break;
		default:
		printf("Invalid Menu/n");	
	}
	           bill=rupees;
	printf("Your total Bill is:%.4lf",bill);
	return 0;
}
