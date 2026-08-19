#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void Area()=0;
		void display(){
			cout<<"\n parent calss method";
		}
};
class Circle:public Parent{
	public:
		int r;
		
		void Area(){
			cout<<"Enter radius";
			cin>>r;
			cout<<"\n Area of circle="<<3.14*r*r;
		}
};
class Rect : public Parent{
	public:
		int l,b;
		
		void Area(){
			cout<<"\n Enter l and b";
			cin>>l>>b;
			cout<<"\n area of rect="<<l*b;
		}
		
};
main(){
	Circle c1;
	c1.Area();
	c1.display();
	Rect r1;
	r1.Area();
}
