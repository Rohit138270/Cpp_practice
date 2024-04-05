#include<iostream>
using namespace std;

class Classes{

	public:
		void if_statement(){
			int age = 18;
			if(age<=18){
				cout<<"You can vote..."<<endl;
			}
			cout<<"------------------------------"<<endl;
		
		}
		
		void ifelse_statement(){
			int no1=40,no2=50;
			if(no1>no2){
				cout<<"Number 1 is big..."<<endl;
			}
			else{
				cout<<"Number 2 is big..."<<endl;
			}
			
		cout<<"------------------------------"<<endl;
		}
		
		void ifelseladder_statement(){
			int marks = 80;
			if(marks>75){
				cout<<"A+"<<endl;
			}
			else if(marks<75 && marks > 50){
					cout<<"B+"<<endl;
			}
			else if(marks<50 && marks>30){
			cout<<"C+"<<endl;
		}
		else{
			cout<<"fail.."<<endl;
		}
		
		}
};


int main(){
	
	Classes m1;
	m1.if_statement();
	m1.ifelse_statement();
	m1.ifelseladder_statement();
	
	
}


