#include<iostream>

using namespace std;
class Emp{
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
}
/*class demo{
	public:
		demo(){
			cout <<"print";
		}
	
	
};
int main(){
	
const	demo abc;
	
}*/



