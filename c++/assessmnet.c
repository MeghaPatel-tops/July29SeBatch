#include<stdio.h>
struct expnese{
	char cname[30];
	float price;
};
main(){
	int ch;
	struct expnese e[10];
	int i=0,j;
	while(1){
	  printf("\n press 1 for add expense");
	  printf("\n press 2 for view");
	  printf("\n press 3 for save n exit");
	  scanf("%d",&ch);
	    if(ch==1){
	    	printf("\n enter expnese");
	    	scanf("%s %f",e[i].cname,&e[i].price);
	    	i++;
		}
		else if(ch==2){
			for(j=0;j<i;j++){
				printf("\n %s \t %f",e[j].cname,e[j].price);
			}
		}
		else if(ch==3){
			break;
		}
		else{
			printf("\n Invalid choice");
		}
	}
}
