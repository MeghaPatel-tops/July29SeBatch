#include<stdio.h>
float pi=3.14;//global scope
void areaOfCircle(int r){// r formal parameter
	float area= r*r*pi;
	printf("\n area of circle=%f",area);
}	

main(){

	
	{
		int x=100;//local varible
		printf("\n x=%d",x);
		printf("\n in local scope pi=%f",pi);
	}
	//	printf("\n x=%d",x);=>genrate error like undefine varible
	printf("\n in main scope pi=%f",pi);
	areaOfCircle(5);
}
