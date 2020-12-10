#include <stdio.h>

float result;
int addition (int, int);
int substraction (int,int);
float product (int, int);
float division (int, int);

int main(){
	char cont;
	int x,y,mode;
	do{
		printf("Give two numbers separated by a ','\n");
		scanf("%i,%i",&x,&y);
		printf("What do you want to do?:\n1-Addition\n2-Substraction\n3-Product\n4-Division\n");
		scanf("%i",&mode);
		switch(mode){
			case 1:
				result=addition(x,y);
				printf("The addition is = %i",(int) result);
				break;
			case 2:
				result=substraction(x,y);
				printf("The substraction is= %i",(int)result);
				break;
			case 3:
				result=product(x,y);
				printf("The product is= %i", (int)result);
				break;
			case 4:
				result=division(x,y);
				printf("The division is= %f\n",result);
				break;}
		printf("Continue? y/n ");
		scanf("%s",&cont);}
	while(cont=='y');
	return 0;}
int addition (int x, int y){
	result=x+y;
	return result;}
int substraction (int x, int y){
	result=x-y;
	return result;}
float product (int x, int y){
	result=x*y;
	return result;}
float division (float x, float y){
	result=x/y;
	return result;}
