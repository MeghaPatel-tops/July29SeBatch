#include<stdio.h>
struct Product{
	int pid;
	float price;
	char pname[20];
};
main(){
	struct Product p1;
	printf("\n Enter product Id,Name,Price");
	scanf("%d %s %f",&p1.pid,p1.pname,&p1.price);
	printf("\n pid=%d pname =%s price=%f",p1.pid,p1.pname,p1.price);
}
