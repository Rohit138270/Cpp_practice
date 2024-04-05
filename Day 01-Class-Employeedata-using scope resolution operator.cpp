#include<iostream>
using namespace std;

class Swap{
	int num1,num2;
	
	public:
	
	int swap(int n1,int n2){
		num1=n1;
		num2=n2;
		cout<<"value before Swapping :"<<num1<<" "<<num2<<endl;
		int temp=num1;
		num1=num2;
		num2=temp;
	}
	int display(){
		cout<<"value after Swapping :"<<num1<<" "<<num2<<endl;
	}
};

int main(){
	Swap s;
	s.swap(4,5);
	s.display();
}


