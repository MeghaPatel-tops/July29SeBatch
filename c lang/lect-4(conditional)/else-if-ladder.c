#include<stdio.h>
//conditinal statement else-if-ladder
/*
   if(cond-1){}
   else if(cond-2){}
   else if(cond-3){}
   else{}

*/
main(){
	int x1,x2;
	printf("\n Enter the value of x1 and x2");
	scanf("%d %d",&x1,&x2);
	if(x1 > 0 && x2 > 0){
		printf("\n First");
	}
	else if(x1 <0  && x2 > 0){
		printf("\n sec");
	}
	else if(x1 < 0 && x2 < 0){
		printf("\n Third");
	}
	else if(x1 > 0 && x2 < 0){
		printf("\n Forth");
	}
	else{
		printf("\n Center line");
	}
}
