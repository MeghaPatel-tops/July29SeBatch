#include<stdio.h>
struct Subject{
	char sname[20];
	float marks;
};
struct User{
	char name[20];
	int uid;
	char email[20];
	struct Subject s[3];	
};
main(){
	struct User u1;
	printf("\n Enter uid username and email");
	scanf("%d %s %s",&u1.uid,u1.name,u1.email);
    int i;
    for(i=0;i<3;i++){
    	printf("\n Enter subject name and marks");
    	scanf("%s %f",u1.s[i].sname,&u1.s[i].marks);
	}
	
	printf("\n name=%s email:=%s uid=%d",u1.name,u1.email,u1.uid);
	for(i=0;i<3;i++){
    	printf("\n Enter subject name=%s  and marks=%f",u1.s[i].sname,u1.s[i].marks);
    
	}
	
}
