#include<stdio.h>
int main()
{
int attendance;
printf("Enter your Attendance percentage: ");
scanf("%d",&attendance);
if(attendance>=75)
	printf("Eligible for exams");
else
printf("Not elgible for exams");
	return 0;
	
}
