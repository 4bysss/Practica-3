#include<stdio.h>
#define swap(x,y) (aux=x,x=y,y=aux)
int main(){
	int a,b,aux;
	printf("Give me the fucking numbers you want to swap, you fucking idiot");
	scanf("%i,%i", &a, &b);
	swap(a,b) ;
	printf("Your numbers swaped are %i and %i",a,b);
	return 0;}
