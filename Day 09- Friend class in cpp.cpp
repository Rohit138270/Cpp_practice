 #include<iostream>
 using namespace std;
 
 class Demo{
	public:
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
 class Demo1{
 	
 	void  Fucntion(Demo& obj){
 		cout<<"inside Friend fucntiopn"<<obj.id<<endl;
 	}	
 	
 };
 
 int main(){
 	
 	Demo obj1;
 	Fucntion(obj1);
 	
 	return 0;
 	
 }
