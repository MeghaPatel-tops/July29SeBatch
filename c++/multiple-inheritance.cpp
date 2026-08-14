#include<iostream>
using namespace std;
class AreaOfCircle{
	 public:
	 	int r;
	 	void getCircle(){
	 		cout<<"\n Enter radius";
	 		cin>>r;
	 		cout<<"\n Area of circle="<<3.14*r*r;
		}
		 
};
class AreaOfTriangle{
	public:
		int base,height;
		void getTriange(){
			cout<<"\n Enter base and height";
			cin>>base>>height;
			cout<<"\n Area of triangle"<<(base*height)/2;
		}
};
class Area : public AreaOfCircle,public AreaOfTriangle {
	public:
		int choice;
		void comman(){
			for(;;){
				cout<<"\n\n\n press 1 for circle";
				cout<<"\n press2 for triangle";
				cout<<"\n press 3 for exit";
				cout<<"\n enter your choice";
				cin>>choice;
				if(choice==3){
					break;
				}
				switch(choice){
					case 1:
						getCircle();
					break;
					case 2:
						getTriange();
					break;
				
					default:
						cout<<"\n Invalid choice";
					break;	
					   	
					    	
				}
			}
		}
};
main(){
	Area a1;
	a1.comman();
}
