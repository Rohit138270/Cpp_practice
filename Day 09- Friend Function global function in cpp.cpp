 #include<iostream>
 using namespace std;
 
 class Demo{
	int id;
	
	public:
	Demo(){
		id=10;
	}
//	void Show(){
//		cout<<"In the base class demo and private member functuion is "<<id<<endl;
//		
//	}
// 	
	friend void Fucntion(Demo& obj);
	
 };
 
 void  Fucntion(Demo& obj){
 	cout<<"inside Friend fucntiopn"<<endl<<obj.id;
 }
 int main(){
 	
 	Demo obj1;
 	Fucntion(obj1);
 	
 }
