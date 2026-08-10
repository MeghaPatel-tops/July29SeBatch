#include<iostream>
using namespace std;
class Maths{
	
	   public:
	   	int x,y;
	   //defualt constructor
	   Maths(){
	   		cout<<"\n simple con. called";
	   }
	   //parameterized constructor
	   Maths(int a,int b){
	   	    x=a;
	   	    y=b;
	   }
	   //copy constructor
	   Maths(const Maths &m2){
	   	m2.x=100;
	   	 x=m2.x;
	   	 y=m2.y;
	   }
	   void display(){
	   	  cout<<"\n x="<<x<<"\t y="<<y;
	   }
};
main(){
	Maths m1;
	Maths m2(12,34);
	m2.display();
	Maths m3= m2;
	m3.display();
}
