#include<iostream>
using namespace std;
class Product{
	 
	  //data member 
	  int pid;
	  char pname[20];
	  float price;
	  
	  
	   public:
	  //data function
	  void getProduct(){
	  	  cout<<"\n Enter pid pname price";
	  	  cin>>pid>>pname>>price;
	  }
	  
	  void showProduct(){
	  	   cout<<"\n pid="<<pid;
	  	   cout<<"\n pname="<<pname;
	  	   cout<<"\n price="<<price;
	  }
	  
};
main(){
	Product p1;
	p1.getProduct();
	p1.showProduct();
//	cout<<"\n pname="<<p1.pname;
}
