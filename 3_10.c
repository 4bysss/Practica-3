#include <stdio.h>
void factorizator (int *x);

int main(){
	int num1;
	int num2;
	int c;
	printf ("Give the numbers for the factorial");
	scanf("%i,%i",&num1,&num2);
	c=num1-num2;
	factorizator (&num1);
	factorizator (&num2);
	factorizator (&c);
	printf("The factorial is %f",((float)num1/(float)(num2*(c))));
	return 0;
	}

void factorizator (int *x){
int count;
int limit=*x;
for(count=1;count<limit;count++){
	*x=(*x)*count;
}}


