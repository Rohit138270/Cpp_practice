#include<iostream>
#include<String.h>
using namespace std;

class Student{
	
	int id;
	char name [20];
	double fees;
	public:
	Student(int,char[],double);
	void display(){
		cout<<id<<" "<<name<<" "<<fees;
	}
	
};
Student::Student(int i,char n[], double f) {
	id=i;
	strcpy(name,n);
	fees=f;
	cout<<"parameterized constructor is called"<<endl;
	
	
}

int main(){
	Student st(101,"atyan",40000);
	st.display();
	
}


























/* class Emp{
	int id;
	double sal;
	public:
		Emp(int i,double d){
			cout<<"Parameterized const"<<endl;
			id=i;
			sal=d;
			cout<<id<<" "<<sal;
		}
};

int main(){
	Emp em(1,4000);
	//Emp em= new Emp(101,40000);
}*/
/*class demo{
	public:
		demo(){
			cout <<"print";
		}
	
	
};
int main(){
	
const	demo abc;
	
}*/



