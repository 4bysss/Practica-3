#include <stdio.h>
#include <math.h>
float perimeter(int);
float circunference(int);
float sphere(int);
float pi=3.1416;
float result;
int main(){
	int r;
	int mode;
	printf("Give a radius");
	scanf("%i",&r);
	printf("Press:\n1-Perimeter\n2-Circunference\n3-Sphere\n");
	scanf("%i",&mode);
	switch(mode){
		case 1:
			result=perimeter(r);
		printf("Perimeter=%f",result);
		break;
		case 2:
			result=circunference(r);
			printf("Circunference=%f",result);
			break;
		case 3:
			result=sphere(r);
			printf("Sphere=%f",result);
			break;}
	return 0;}
float perimeter(int r){
	float result;
	result=2*pi*r;
	return result;}
float circunference(int r){
	float result;
	result=pi*pow(r,2);
	return result;}
float sphere(int r){
	float result;
	result=(4*pi*pow(r,3))/3;
	return result;}
