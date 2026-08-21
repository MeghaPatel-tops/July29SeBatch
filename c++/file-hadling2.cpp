#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f1;
	char data[100];
	f1.open("student.txt",ios::app);
	f1<<"\nstduent Name:Megha";
	f1.close();
	
	ifstream f2;
	f2.open("student.txt",ios::in);
	while(f2.getline(data,100)){
		cout<<data;
		cout<<"\n";
	}
	cout<<data;
	f2.close();
}

