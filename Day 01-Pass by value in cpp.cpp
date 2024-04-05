#include<iostream>
using namespace std;

class Swap{
	//int num1,num2;
	public:
		int swap(int& d1,int&d2){
			cout<<"Before swap value is :"<<d1<<" "<<d2<<endl;
			int temp = d1;
			d1 = d2;
			d2=temp; 
		  cout<<"After swap value is :"<<d1<<" "<<d2<<endl;
		}
		
};



int main(){
int num1=10,num2=20;
int &d1 =num1;
int &d2	=num2;
Swap sw;
sw.swap(d1,d2);
	
}


