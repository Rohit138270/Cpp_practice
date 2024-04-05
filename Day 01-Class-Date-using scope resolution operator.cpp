#include<iostream>

using namespace std;

class MyDate{
	
	int dd,mm,yy;
	public:
		void setDate(int,int,int);
		void display();
		int setDay(int);
		int getYear();
};

void MyDate :: setDate(int d,int m,int y){
	dd=d;
	mm=m;
	yy=y;
}

void MyDate :: display(){
	cout<<"Date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

int MyDate :: setDay(int d){
	dd=d;
}

int MyDate :: getYear(){
	return yy;
}

int main(){
	MyDate m1;
	m1.setDate(18,3,24);
	m1.display();
	m1.setDay(20);
	m1.display();
	cout<<"Year is :"<<m1.getYear();
}
