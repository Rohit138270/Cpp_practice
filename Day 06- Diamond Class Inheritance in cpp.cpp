#include<iostream>

using namespace std;

class SuperClass{
	public:
		
		int first_var;
		
		void show(){
			
			cout<<"inside Super Class"<<endl;
		}
	
	
	
};


class SubClass1: virtual  public SuperClass{
	public: 
		int second_var;
		
		
		void show(){
			
			cout<<"inside Sub 1 Class"<<endl;
		}
	
};


class SubClass2: virtual public SuperClass{
	public:
		int third_var;
		
		
		void show(){
			
			cout<<"inside Sub 2 Class"<<endl;
		}
};

class ChildClass:public SubClass1 , public SubClass2 {
	public:
		int fourth_var;
		
		
		void show(){
			
			cout<<"inside child Class"<<endl;
		}
	
	
};

int main(){
	ChildClass obj;
	obj.show();
//	obj.show();	
//	
//	obj.show();
//	obj.show();
//	obj.show();
	
	
}
