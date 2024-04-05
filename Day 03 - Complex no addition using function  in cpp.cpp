#include<iostream>
using namespace std;
class Complex{
	int real , img;
	public:
		Complex()
		{
			
		}
		Complex(int r,int i){
			real=r;
			img=i;
			
		}
		Complex add(Complex & i){
			Complex c4;
			c4.real=this->real+i.real;
			c4.img=this->img+i.img;
			return c4;
			
						
		}
		
		void display(){
		cout<<real<<"+"<<img<<"i"<<endl;	
		}
		
		
};

int main (){
	Complex c1(2,4);
	c1.display();
	Complex c2(4,3);
	c2.display();
	Complex c3 = c1.add(c2);
	c3.display();
	
}
