#include<iostream>

using namespace std;

template <class T,class S>

void show(T * x,S y){
	cout<<"Enter Name : "<<x<<endl;
	cout<<"Enter id : "<<y<<endl;
}

int main(){
	
	show("Rahul",101);
	
}
