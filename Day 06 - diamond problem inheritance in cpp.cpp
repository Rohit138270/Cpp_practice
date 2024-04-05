#include<iostream>

using namespace std;

class SuperClass{
	public:
		
		int first_var;
		
		virtual void show1(){
			
			cout<<"inside Super Class";
		}
	
	
	
};


class SubClass1:public SuperClass{
	public: 
		int second_var;
		
		
		void show2(){
			
			cout<<"inside Sub 1 Class";
		}
	
};


class SubClass2: public SuperClass{
	public:
		int third_var;
		
		
		void show3(){
			
			cout<<"inside Sub 2 Class";
		}
};

class ChildClass:public SubClass1 , public SubClass2 {
	public:
		int fourth_var;
		
		
		void show4(){
			
			cout<<"inside child Class";
		}
	
	
};

int main(){
	ChildClass obj;
	obj.show3();
	
//	obj.show2();
//	obj.show3();
//	obj.show4();
	
	
}