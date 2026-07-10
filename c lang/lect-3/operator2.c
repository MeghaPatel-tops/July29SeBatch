#include<stdio.h>
main(){
	int a=10,m=10,n;
	a++;//increment by 1
	printf("\n a=%d",a);
	//n=m++;//post increment=>first assign then increse
	n=++m;//pre increment:>first increse then assign
	printf("\n n=%d m=%d",n,m);
}
