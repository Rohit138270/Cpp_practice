#include<iostream>

using namespace std;

template <class T>

void  swap1(T&x,T&y){
   T temp;
   temp=x;
   x=y;
   y=temp;

} 

int main(){
	int a = 20,b = 30;
	cout<<"Before Swapping : "<<a<<" "<<b<<endl;
	swap1(a,b);
	cout<<"After Swapping : "<<a<<" "<<b<<endl;
	
}

