#include<iostream>
using namespace std;
//function overloading:same function perform diff  task
//according to number of argument and type of argument
class Maths{
	public:
	void add(int x,int y){
		cout<<"\n addition of "<<x<<"and "<<y<<"="<<x+y;
	}
	void add(float a,float b,float c){
		cout<<"\n addition of three floats="<<a+b+c;
	}
};
main(){
	Maths m1;
	m1.add(1.2,3.4,7.8);
	m1.add(100,200);
}
