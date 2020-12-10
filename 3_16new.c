#include <stdio.h>
char separator(char);

int main(){
	char num;
	printf("Write number");
	while(num!='*'){
		num=getchar();
		separator(num);}
	return 0;}

char separator (char num){
	printf("%c  ",num);
	return 0;}
