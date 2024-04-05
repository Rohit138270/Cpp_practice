#include<iostream>

using namespace std;

template <class T,class S>

T show(T a, S b){
   cout<<"Value of a & b : "<<a<<" "<<b<<endl;
}

int main(){
	
	show(12,12.12);
	return 0;
	
	
	
}
