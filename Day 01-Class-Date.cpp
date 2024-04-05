#include<iostream>
using namespace std;
class ComplexNo{
	
	int real,img;
	public:
		int setReal(int);
		int setImg(int);
		void display();
		int updateImgValue(int);
		int getImgValue();
			
};

int ComplexNo::setReal(int r){
	real=r;
	return real;
}
int ComplexNo::setImg(int i){
	img = i;
	return img;
}
void ComplexNo::display(){
	cout<<"Complex No. is :"<< real<<"+"<<img<<"i"<< endl;
		
}
int ComplexNo::updateImgValue(int u){
	img=u;
	
}
int ComplexNo::getImgValue(){
	return img;
}


int main(){
	ComplexNo cm ;
	cm.setReal(4);
	cm.setImg(5);
	cm.display();
	cm.updateImgValue(10);
	cm.display();
	cout<<"Updated value is:"<<cm.getImgValue();
	
	
}


