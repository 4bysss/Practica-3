#include <stdio.h>
float sum (int);
int main(){
	int n;
	float result;
	printf("Give the number if times you want to sum up");
	scanf("%i",&n);
	result=sum(n);
	printf("The result is %f",result);
	return 0;}
float sum (int n){
	int cont;
	float result;
	result=0;
	for (cont=1; cont<=n ;cont++){
		result=result+(1/(float)cont);}
		return result;}
