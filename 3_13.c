#include <stdio.h>
int add_divisor(int);
int main (){
	int num;
	int result;
	printf("Write the number you want to know if its perfect");
	scanf("%i",&num);
	result=add_divisor(num);
	if(result==num){
		printf("The number is perfect");}
	else{
		printf("The number is not perfect");}
	return 0;}
//int add_divisor (int)
//precondition:n>0
//postcondition:Gives the sum of all the divisors
int add_divisor(int num){
	int c;
	int count;
	c=0;
	for(count=1;count<num;count++){
		if(num%count==0){
			c=c+count;}}
	return c;}
