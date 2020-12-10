#include <stdio.h>
#include <math.h>
int sum (int,int);
int main (){
int n;
int result;
int x;
printf("Write a base for the sum up");
scanf("%i",&x);
printf("Write the number of terms you want to sum up");
scanf("%i",&n);
result= sum(n,x);
printf("The sum of the series is %i", result);
return 0;}

//Header: int sum (int);
//Precondition=n>0
//Postcondition:This function will sum the series -x^3+x^5-x^7...
int sum (int n,int x){
int count;
int sum_r;
int powe;
int exp;
cont_times=1;
sum_r=0;
exp=1;
for (count=1;count<=n;count=count++){
	powe=pow(x,exp);
	if(count%2==0){
		powe=powe*-1;}
	sum_r=sum_r+powe;
	exp=exp+2;}
return sum_r;}


