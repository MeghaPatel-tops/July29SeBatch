#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f1;
	char data[100];
	f1.open("student.txt",ios::out);
	f1<<"stduent Name:Megha";
	f1.close();
	
	ifstream f2;
	f2.open("student.txt",ios::in);
	f1>>data;
	cout<<data;
	f2.close();
}

