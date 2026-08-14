#include<iostream>
using namespace std;
class User{
	public:
		int uid;
		char uname[20];
		 int acc;
		float bal;
		void getUserInfo(){
			cout<<"\n Enter uid uname and accno and balance";
			cin>>uid>>uname>>acc>>bal;
		}
};
class Saving : public User{
	public:
		void calCintrest(){
			bal= bal + ((bal*2)/100);
			cout<<"\n your balance:"<<bal;
		}
};
class Current : public User{
		public:
		void calCintrestCur(){
			bal= bal - ((bal*2)/100);
			cout<<"\n your balance:"<<bal;
		}
};
main(){
	int ch;
	cout<<"\n pree 1 for Saving";
	cout<<"\n Press 2 for Current";
	cout<<"\n Enter your choice";
	cin>>ch;
	if(ch==1){
		Saving s1;
		s1.getUserInfo();
		s1.calCintrest();
	}
	else if(ch==2){
		Current c1;
		c1.getUserInfo();
		c1.calCintrestCur();
	}
	else{
		cout<<"\n Wrong choice";
	}
}

