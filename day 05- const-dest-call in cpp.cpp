#include<iostream>

using namespace std;

class Call{
	public:
	Call(){
		cout<<"Constructor call"<<endl;
	}
	~Call(){
		cout<<"Destructor call"<<endl;	
	}
};

int main(){
	Call c,c1;     //Call Constructor & destructor 2 times.
	
}
