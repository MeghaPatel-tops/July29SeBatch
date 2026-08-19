#include<iostream>
using namespace std;
class Maths{
	public:
		int m;
		static int s;
		Maths(int m){
			s++;
			this->m=m;
		}
		void display(){
			cout<<"\n m="<<this->m;
		}
		static void staticMethod(){
			cout<<"\n static data="<<Maths::s;
		}
};
int Maths::s=100;
main(){
	Maths m1(2);
	
	Maths m2(3);
	m1.display();
	m2.display();
	Maths::staticMethod();	

}
