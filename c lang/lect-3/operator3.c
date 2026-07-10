#include<stdio.h>
main(){
	int a=100;
	int age;
	int num;
	printf("\n size fo int=%d",sizeof(int));
	printf("\n Enter your age:");
	scanf("%d",&age);
	//(condition)?(true):(false)
	(age>=18)?printf("\n Eligible"):printf("\n Not eligible");
	printf("\n Enter any number");
	scanf("%d",&num);
	(num>0)?printf("\n positive"):printf("\n negative");
}
