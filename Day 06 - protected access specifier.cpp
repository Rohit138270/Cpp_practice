#include<iostream>

using namespace std;

class Parent{
	
	protected:
		int pro_id;
};

class Child:public Parent{
	public:
	void setid(int id){
		pro_id=id;
	}
	
	void display(){
		cout<<"Id : "<<pro_id<<endl;
	}
	
};

int main(){
	Child obj;
	obj.setid(15);
	obj.display();
/*	
	Parent obj1; //parent cannot access the property of child class
	obj1.setid(16);
	obj1.display();*/
	
}
