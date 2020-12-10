#include <stdio.h>

float rounder (int,float);

int main (){
	float n1;
	float dec;
	printf("Give the number you want to round");
	scanf("%f",&n1);
	dec=n1-(int)n1;
	n1=rounder (n1,dec);
	printf("Your number has evolved into %f", n1);
	return 0;
}

//float rounder (float)
//precondition n1>0
//postcondition gives the number with his lasta decimal rounded
float rounder (int n1,float dec){
	float result=0;
	dec=dec*100;
	if ((int)dec%10>5){
		dec=dec+10;}
	dec=dec/10;
	n1=n1*10;
	result=n1+(int)dec;
	return(result/10);}
