#include<iostream>
using namespace std;
//Multi level
//grand father
class A{
	  public:
	  	int a;
	  	void getA(){
	  		cout<<"\n Enter a";
	  		cin>>a;
		  }
};
//parent class wich inherit grand father
class B: public A{
	 public:
	  	int b;
	  	void getB(){
	  		cout<<"\n Enter b";
	  		cin>>b;
		  }
};
//child class wich inherit  father
class C: public B{
	 public:
	  	int c;
	  	void getC(){
	  		cout<<"\n Enter c";
	  		cin>>c;
		}
		void add(){
			cout<<"\n Addition="<<a+b+c;
		}
};
main(){
	C c1;
	c1.getA();
	c1.getB();
	c1.getC();
	c1.add();
}
