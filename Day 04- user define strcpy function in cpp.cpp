#include<iostream>

using namespace std;
class User_strcpy{
	
	public:

		int temp[5];
		
		int strcpy(int value[]){
					
			for(int i=0;i<5;i++){
				temp[i]=*(value+i);
			}
			
		}
		
		void show(){
			for(int i=0;i<5;i++){
				cout<<*(temp+i)<<" ";		
			}
		}
	
		
	
};

int main (){

	int value[5];
	
	
		for(int i=0;i<5;i++){
			cout<<"Enter the values :"<<endl;
			cin>>value[i];
		
		}
	
	User_strcpy obj;

	obj.strcpy(value);
	obj.show();

}
