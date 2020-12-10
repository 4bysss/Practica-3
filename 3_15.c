#include <stdio.h>
int binary(int *num1);

int main(){
	int num;
	int bin;
	printf("Give the number you want to convert");
	scanf("%i",&num);
	bin=binary(&num);
	printf("%i",bin);
	return 0;}
int binary(int *num1){
	int i;
	int bin;
	bin=0;
	i=1;
	while(*num1>0){
		bin=bin+(*num1%2)*i;
		i=i*10;
		*num1=*num1/2;}
		return bin;}


	

