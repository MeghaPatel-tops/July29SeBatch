#include<iostream>
using namespace std;
class friendClass;
class Maths{
	   private:
	   int a;
	   public:
	   	  Maths(int a){
	   	  	this->a=a;
			}
		friend class friendClass;
			
};
class friendClass{
	public:
		void display(Maths& m1){
		cout<<"\n access private data in frined a="<<m1.a;
		}
};

main(){
	Maths m1(12);
	friendClass f1;
	f1.display(m1);
}
