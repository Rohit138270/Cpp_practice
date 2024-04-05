#include<iostream>

using namespace std;

class Employee{
	public:
		int id;
				
		Employee(int i)
		{
		
			id=i;
			//cout<<id<<endl;
		
		}
		
	 virtual int calculate_wages()
		{
			
			cout<<"int cal 1"<<endl;
			return id;
		}
		
		
};

class wage_employee:public Employee{
	public:
		int rate;
		int hours;
		
		wage_employee(int r, int h,int id):Employee(id){
			
			rate=r;
			hours=h;
			
			
		}
		
		int calculate_wages(){
			//int cal=hours+rate;
			cout<<"inside cal2"<<endl;
			return hours*rate;
			//cout<<cal<<endl;
		
		}
		
};

class sales_employee:public wage_employee{
	public:
		int sal;
		int comm;
		
		
		sales_employee(int s, int c,int x,int y,int z ):wage_employee(x,y,z){
			sal=s;
			comm=c;
		
			
		}
			
		
		int calculate_wages(){
			//int cal=sal+comm+x+y+z;
			cout<<"inside cal 3"<<endl;
			return sal*comm+hours*rate;
		}
		
};

int main(){
	//Employee *ptr;
	Employee * ptr=new Employee(10);
	
	Employee * ptr2=new wage_employee(100,5,101);
	
	Employee * ptr3= new sales_employee(500,20,30,40,501);
	
	cout<<ptr->calculate_wages()<<endl;
	

	cout<<ptr2->calculate_wages()<<endl;


	cout<<ptr3->calculate_wages()<<endl;
	
	
}
