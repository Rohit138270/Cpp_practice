#include<iostream>
 using namespace std;
int main(){
	int num,i,fact=1;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++){
		fact = fact * i;
	}
	cout<<"Factorial is  : "<<fact;
}
