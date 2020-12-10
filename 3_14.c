#include <stdio.h>
int add_divisor(int);
int main(){
	int num1;
	int num2;
	int result;
	printf("Give the first number");
	scanf("%i",&num1);
	printf("Give the second number");
	scanf("%i",&num2);
	result=add_divisor(num1);
	if(result==num2){
		result=add_divisor(num2);
		if(result==num1){
			printf("The numbers are friendly");}
		else{
			printf("The number are not friends");}}
	else{
		printf("The numbers are not friends");}
return 0;}

//header: int add_divisor (int)
//Precondition: num1&num2>0
//Postcondition: Gives the sum of the divisors
int add_divisor (int num){
	int c;
	int count;
	c=0;
	for (count=1;count<num;count++){
		if(num%count==0){
			c=c+count;}}
	return c;}
