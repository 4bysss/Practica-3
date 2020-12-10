#include <stdio.h>

void pyramid(int);

int main(){
	int ext;
	printf("Give the number of series you want for your pyramid");
	scanf("%i",&ext);
	pyramid (ext);
	return 0;}

//void pyramid (int)
//precondition ext>0
//postcondition prints a pyramid of 1s and 0s
void pyramid (int ext){
	int c,c1,c2;
	for (c=0;c<=ext;c++){
		c1=0;
		if (c%2==0){
			do{
				if(c1<c){
					printf("0");
					c1++;}
				if(c1<c){
					printf("1");
					c1++;}}while(c1<c);}
		else{
			do{
				if(c1<c){
					printf("1");
					c1++;}
				if(c1<c){
					printf("0");
					c1++;}}while(c1<c);}
		printf("\n");
	}
}






