#include<stdio.h>
float Mtime[7];//global varible
int i=0;
int addTime(){
	if(i > 6){
		printf("\n out bound");
	}
	else{
		printf("\n enter your miniuts");
		scanf("%f",&Mtime[i]);
		
	}
	i++;
	
	return 0;
}
int display(){
	int j;
	for(j=0;j<=i;j++){
		printf("\n song time=%.2f",Mtime[j]);
	}
	return 0;
}
main(){
	
	int choice;
    for(;;){
    		printf("\n press 1 for add time");
			printf("\n press 2 for add display");
			printf("\n press 3 for add exits");
			
			printf("\n\n Enter your choice:");
			scanf("%d",&choice);
			if(choice==3){
				break;
			}
			else if(choice==1){
				addTime();
			}
			else if(choice==2){
				display();
			}
			else{
				printf("\n Wrong choice");
			}
			
	}
}
