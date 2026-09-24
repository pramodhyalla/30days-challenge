//A student has marks for five subjects. Write a C program to read the marks of all five subjects and calculate the total marks, average marks, and percentage. Display all three results clearly.
#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5;
float total,avg,percentage;
printf("enter the marks for 5 subjects:");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5;
percentage=(total/500)*100;
printf("total marks=%f\n",total);
printf("avg marks=%f\n",avg);
printf("per=%f\n",percentage);
return 0;
}
