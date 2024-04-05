#include<iostream>

using namespace std;

class Demo{
	public:
		Demo(){
			cout<<"Constructor call\n";
		}
		
		void display(){
			cout<<"function call\n";
		}
};

int main(){
	Demo* dm = new Demo[3];
	dm[0].display();
	dm[1].display();
	dm[2].display();
}


