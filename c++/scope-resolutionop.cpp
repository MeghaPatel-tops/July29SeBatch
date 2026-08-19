#include<iostream>
//global varible access
//namsepsace access
int x=100;
class Test{
	public:
		void display(){
			std::cout<<"\n global varible="<<::x;
		}
		void testMethod();
};
void Test ::testMethod(){
	std::cout<<"\n Method define outside the class";
}
main(){
	Test t1;
	t1.display();
	t1.testMethod();
}
