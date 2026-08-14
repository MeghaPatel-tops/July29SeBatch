#include<iostream>
using namespace std;
class User{
	public:
		int uid;
		char uname[20];
		char email[20];
		void getUserInfo(){
			cout<<"\n Enter uid uname and email";
			cin>>uid>>uname>>email;
		}
};
//class child : private/public/protected ParentClass
class Cart : protected User{
	public:
		int pid;
		int qty;
		void getCartData(){
		  getUserInfo();
		  cout<<"\n Enter pid and qty you want to buy";
		  cin>>pid>>qty;
		}
		void viewCart(){
			cout<<"\n pid"<<pid<<"\t qty:"<<qty;
			cout<<"\n User name:"<<uname<<"\t email:"<<email;
		}
};
main(){
	Cart c1;
	//c1.getUserInfo();
	c1.getCartData();
	c1.viewCart();
}
