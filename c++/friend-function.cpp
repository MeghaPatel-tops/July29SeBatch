#include<iostream>
using namespace std;

class Maths{
	   private:
	   int a;
	   public:
	   	  Maths(int a){
	   	  	this->a=a;
			}
		friend void display(Maths m1);	
};
void display(Maths m1){
	cout<<"\n access private data in frined a="<<m1.a;
}
main(){
	Maths m1(12);
	display(m1);
}
