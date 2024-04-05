#include<iostream>

using namespace std;

class Copy{
	public:
		int id;
		void init(int x){
			id=x;
		}
		void display(){
			cout<<"ID : "<<id<<endl;
		}
};
int main(){
	Copy c1;
	c1.init(50);
	c1.display();
	
	Copy c2(c1);//copy Const
	c2.display();
	
	
}
