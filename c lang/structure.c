#include<stdio.h>
struct User{
	char name[20];
	int uid;
	char email[20];
};
main(){
	struct User u1={"Ashutosh",101,"aa@gmail.com"};
	struct User u2={"Dhruvin",102,"dh@gmail.com"};
	printf("\n name=%s email:=%s uid=%d",u1.name,u1.email,u1.uid);
	printf("\n name=%s email:=%s uid=%d",u2.name,u2.email,u2.uid);

}
