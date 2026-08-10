#include<stdio.h>
struct Product{
	char pname[20];
	float price;
	int qty;
}p[3];

void addToCart(struct Product p1){
	printf("\n your cart items:\n");
	printf("\n %s %f",p1.pname,p1.price);
}

main(){
	int i,choice;
	printf("\n Enter product details");
	for(i=0;i<3;i++){
		printf("\n enter pname and price qty");
		scanf("%s %f %d",p[i].pname,&p[i].price,&p[i].qty);
	}
	
	for(i=0;i<3;i++){
		printf("\n enter %d for",i+1);
		printf("\t %s %f",p[i].pname,p[i].price);
	}
	printf("\n Enter your choice witch product want to buy");
	scanf("%d",&choice);
	addToCart(p[choice-1]);
	
	
}
