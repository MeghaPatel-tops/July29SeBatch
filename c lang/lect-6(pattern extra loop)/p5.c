#include<stdio.h>
main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(k=4*2-i;k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=4;i++){
		for(k=1;k<=i*2-1;k++){
			printf(" ");
		}
		for(j=4*2-i;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}
}
