#include<iostream>
using namespace std;
class Maths{
	  public:
	  	int a,b,c,d;
	  	Maths(int x,int y,int z=0,int m=0){
	  		  a=x;
	  		  b=y;
	  		  c=z;
	  		  d=m;
		}	  	
};
main(){
	 Maths m1(1,2,3,4);
	 cout<<"\n sizeof m1="<<sizeof(m1);
	 Maths *m2 = new Maths(5,6);
	 cout<<"\n sizeof m2="<<sizeof(m2);
}
