#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void display()=0;
};
class Child: public Parent{
	public:
		void display(){
			cout<<"\n Display method called-child class";
		}
};
main(){
	Parent *p1;
	Child c1;
	p1=&c1;
	c1.display();
	p1->display();
}
