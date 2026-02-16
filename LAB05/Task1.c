#include<stdio.h>
int main()
{
 float cgpa;
 double familyincome;
 printf("Enter your cgpa:");
 scanf("%f",&cgpa);
 printf("Enter your family income:");
 scanf("%lf",&familyincome);
 if(cgpa>=3.5){
 	if(familyincome<50000){
 		printf("You have achieved 100 percent scholarship");
	 }
	 else{
	 	printf("You have achieved 50 percent scholarship");
	 }
 }
 else{
 	if(cgpa>=3.0&& familyincome<40000){
 		printf("You have achieved 25 percent scholarship");
	 }
	 else{
	 	printf("You have not achieved scholarship");
	 }
 }	
	return 0;
}
