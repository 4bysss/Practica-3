#include <stdio.h>
int fact(int);
float e_value(int);

int main (){
	int n;
	float result;
	do{
		printf("Give a number ");
		scanf("%i",&n);} while(n<0);
	result=e_value(n);
	printf("The result is %f",result);
	return 0;}
//Header: Int fact
//Precondition: n>=0
//Postcondition: Gives the factorial number
int fact(int cont){
	int fact_r;
	int cont_fact;
	fact_r=1;
	for(cont_fact=1;cont_fact<=cont;cont_fact++){
		fact_r=fact_r*cont_fact;}
	return fact_r;}
//Header:Float e_value(int)
//Precondition: Needs a Fact_r>0
//Postcondition: Gives the value of e so the main function prints it
float e_value (int n){
	float result;
	int cont;
	int fact_r;
	result=0;
	for(cont=0;cont<=n;cont++){
	fact_r=fact(cont);
	result=result+(1/(float)(fact_r));}
	return result;}
