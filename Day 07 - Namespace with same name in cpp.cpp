#include<iostream>

using namespace std;

namespace nm{
	void display(){
		cout<<"first display"<<endl;
	}
}

namespace nm{
	void display1(){
		cout<<"second display"<<endl;
	}
}

int main(){
	nm::display();
	nm::display1();
}
