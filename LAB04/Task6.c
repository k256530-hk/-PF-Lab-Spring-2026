#include<stdio.h>
#include<math.h>
int main()
{
int marks1,marks2,marks3,marks4,marks5;
float total;
float percentage;

printf("Enter your marks of 5 subjects:\n");
scanf("%d %d %d %d %d",&marks1,&marks2,&marks3,&marks4,&marks5);
total= marks1+marks2+marks3+marks4+marks5;
percentage=(total/500)*100;
printf("Your total is:%f\n",total);
printf("Your percentage is:%f\n",percentage);
if(percentage>=85)
printf("Grade:A");
else if(percentage>=70)
printf("Grade:B");
else if(percentage>=50)
printf("Grade:C");
else
printf("Fail");
return 0;
}
