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
	  	   cout<<"\t pname="<<pname;
	  	   cout<<"\t price="<<price;
	  }
	  
};
main(){
	Product p[3];
    int i;
    for(i=0;i<3;i++){
    	p[i].getProduct();
	}
	for(i=0;i<3;i++){
		p[i].showProduct();
	}
}
