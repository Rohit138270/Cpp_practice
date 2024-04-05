#include<iostream>

using namespace std;

class Date{
	int dd,mm,yy;
	
	public:
	Date(int,int,int);
	void display();
};

Date::Date(int dd,int mm,int yy){
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

void Date::display(){
	cout<<"Date is : "<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
}
int main(){
	Date d1(19,03,24);
	d1.display();
	Date d2(20,03,24);
	d2.display();
}
