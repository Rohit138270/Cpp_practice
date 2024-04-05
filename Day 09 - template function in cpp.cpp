#include<iostream>

using namespace std;

template <class T>

T add(T&a,T&b){
	T result = a+b;
	return result;
} 

int main(){
	int i = 10;
	int j = 20;
	
	float s = 10.10;
	float r = 20.20;
	
	cout<<"Addition is : "<<add(i,j)<<endl;
	cout<<"Addition is : "<<add(s,r)<<endl;
	
}
