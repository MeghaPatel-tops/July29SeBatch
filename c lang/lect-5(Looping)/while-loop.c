#include<stdio.h>
//init condition modificatio
/*
while(condition){
//block
}
*/
main(){
	//to print 1 to 10
	int i=20,j =25,k=15,m=1;//init
	while(i<=10){
		printf("\n i=%d",i);
		i++;
	}
	while(j<=30){
		printf("\n j=%d",j);
		j++;
	}
	printf("\n reverse loop\n");
	while(k>=11){
		printf("\n k=%d",k);
		k--;
	}
	printf("\n jumping 3 count\n");
	while(m<=30){
		printf("\n m=%d",m);
		m+=3;//m= m+3
	}
	
	
}
