#include<iostream>
using namespace std;
class Parent{
	public:
		int a;
	
		Parent(){
			i=0;
			cout<<"\n Parent class con. called";
		}
		Parent(int x){
			a=x;
			cout<<"\n a="<<a;
		}
	
};
class Child : private Parent{
	public:
		int b,c;
		Child(){
			cout<<"\n Child class con. called";
		}
		Child(int y,int z,int x):Parent(x){
			b=y;
			c=z;
			cout<<"\n in child a="<<a<<"\t b="<<b <<"\t c="<<c;
		}
};
main(){
	Child c1;
	Child c2(3,5,6);
//	cout<<"\n outside class a="<<c2.a;
}



