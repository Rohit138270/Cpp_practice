#include<iostream>
using namespace std;
class Test{
	
	public :
		
int sum;
		int add(int a=0,int b=0,int c=0,int d=0);
		
	/*	int add(int a,int b,int c){
			sum=a+b+c;
		
			return sum;
		}*/
		void display(){
			cout<<sum;
		}
};
int Test::add(int a,int b,int c,int d){
		
			sum=a+b+c+d;
			
			return sum;
						
		}

int main (){
	Test t;
	t.add(1,5,4);
	t.display();
	
	
	
}
