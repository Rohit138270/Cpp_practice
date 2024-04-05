#include<iostream>

using namespace std;

class Parent{
	public:
		int id_p;	
};

class Child:public Parent{
	int id_c;

};

int main(){
	Parent obj;
	obj.id_p = 5;
	//obj.id_c= 4; //we cannot access the child class members with parent class object.
	cout<<obj.id_p;
	
}
