#include <stdio.h>
#include <math.h>
int inversor (int);
int main(){
	int num;
	int num2;
	printf("Give a number ");
	scanf("%i",&num);
	num2=inversor(num);
	printf("%i",num2);
	if (num==num2){
		printf("The number is a palindrome");}
	else{	printf("The number is not a palindrome");}
	return 0;}
int inversor(int num){
	int inv;
	inv=0;
	int x;
	while (num>0){
		x=num%10;
		inv=inv*10+x;
		num=num/10;}
	return inv;}
	

