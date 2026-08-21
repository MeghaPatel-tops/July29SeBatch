#include<iostream>
using namespace std;
class Maths{
	public:
		inline void test(){
			cout<<"\n Test method called";
		}
};
main(){
	Maths m1;
	int i;
	for(i=0;i<3;i++){
		m1.test();
	}
}
