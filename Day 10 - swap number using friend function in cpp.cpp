#include<iostream>

using namespace std;

class Swap1{
	int num1,num2;
	
	public:
		Swap1(int num3,int num4){
			num1=num3;
			num2=num4;
		}
		
		friend int swapnum(Swap1&);
};

int swapnum(Swap1& s){
	int temp=0;
	cout<<"Before swapping "<<s.num1<<" "<<s.num2<<endl;
	temp = s.num1;
	s.num1 = s.num2;
	s.num2 = temp;
	
	cout<<"After swapping "<<s.num1<<" "<<s.num2<<endl;

}

int main(){
	Swap1 s1(10,20);
	swapnum(s1);
	
	
	
}
