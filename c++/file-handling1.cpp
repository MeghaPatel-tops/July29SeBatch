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
	//f2>>data;
	f2.getline(data,20);
	cout<<data;
	f2.close();
}

