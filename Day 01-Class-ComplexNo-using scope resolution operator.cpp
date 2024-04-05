#include<iostream>
using namespace std;
class Employee{
	
	int id;
	double sal;
	public:
		void setData(int,double);
		void display();
		int setId(int);
		double getSal();
	
			
};

void Employee :: setData(int i,double s){
	id=i;
	sal=s;
}

void Employee :: display (){
	cout<<"Employee Data : "<<id<<","<<sal<<endl;
}

int Employee :: setId(int d){
	id=d;
}

double Employee :: getSal(){
	return sal;
}




int main(){
	Employee em;
	em.setData(101,50000);
	em.display();
	em.setId(1);
	em.display();
	cout<<"Sal : "<<em.getSal();
	
	
}


