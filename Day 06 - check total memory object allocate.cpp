#include<iostream>

using namespace std;

class Parent{
	public:
		int id_p;
	protected:
	 int id_pro;	
};

class Child:public Parent{
	public:
	int id_c;
	void display(){
		id_pro = 12;
		cout<<"Protected id : "<<id_pro<<endl;
	}
	
};

int main(){
	Child obj;
	obj.id_p = 4;
	obj.id_c= 5;
//	obj.id_pro = 6; // protected cannot access in main it access within the subclass.

	cout<<"Child id : "<<obj.id_c<<endl;
	cout<<"Parent id : "<<obj.id_p<<endl;	
	obj.display();
	cout<<sizeof(obj)<<endl;
	
}
