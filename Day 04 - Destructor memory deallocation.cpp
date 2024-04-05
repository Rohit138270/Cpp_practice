#include<iostream>

using namespace std;

class Check{
	int * ptr;
	
	public:
		~Check(){
			delete ptr;
		}
		
		Check(){
			ptr = new int;
			*ptr = 10;
		}
		void display(){
			cout<<*ptr<<endl;
		}
};

int main(){
	Check obj;
	obj.display();
	obj.~Check();
	
}
