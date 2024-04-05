#include<iostream>

using namespace std;

class Desccall{
	public:
		Desccall(){
			cout<<"No of times constructor call"<<endl;
		}
		~Desccall(){
			cout<<"No of times desctructor call"<<endl;
		}
};

int main(){
	Desccall dc;
	dc.~Desccall(); //Two times desc call.
	
}
