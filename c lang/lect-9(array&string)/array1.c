#include<stdio.h>
main(){
	int a[5],i,j,temp;
	printf("\n Enter array element");
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	//sorting
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//print
	printf("\n after sorting array elemts:");
		for(i=0;i<5;i++){
		printf("\n Enter a[%d]=%d",i,a[i]);
		
	}
}
