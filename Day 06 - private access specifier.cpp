#include<iostream>

using namespace std;

class Publicacc{
	protected:
		
		double raduis = 10;
		
		public:
		double calculate(int r){
			raduis=r;
			return 3.14 * raduis * raduis;
		}
		void show(){
			cout<<raduis;
		}
};

class Child:public Publicacc{
	public:
		
	void display(){
		Publicacc obj1;
		obj1.show();
		//cout<<obj1.show();
		
	}
};
int main(){
	Child obj_c;
	obj_c.display();
	obj_c.show();
	Publicacc obj_p;
	obj_p.show();
	

	
}
