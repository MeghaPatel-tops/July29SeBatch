#include<stdio.h>
//password len 8 less msg 
main(){
	int i=0,len,j=0;
	char str[20],rev[20];
	printf("\n Enter String:");
	scanf("%s",str);
	printf("\n str=%s",str);
	while(str[i]!='\0'){
		i++;
	}
	printf("\n len=%d",i);
	i--;
	while(i>=0){
	//	printf("\n str[%d]=%c",i,str[i]);
		rev[j]=str[i];
	//	printf("\t rev[%d]=%c",j,rev[j]);
		i--;
		j++;
		
	}
	printf("\n rev str=%s",rev);
	
}
