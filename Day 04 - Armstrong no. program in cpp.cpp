#include<iostream>

using namespace std;
class Armstrongt{

	
	public:
//	int value;
		
		int armstrong(int value){
			int i=0;
			int num=value;
			int temp;
			int num2=0;
			
			while(num!=0){
				temp=num%10;
				num2=num2+(temp*temp*temp);
				num=num/10;
				
				
			}
				
			if(value == num2){
				cout<<"Is armstrong";
					
			}else{
				cout<<"not armstrong";
			}
			
		
		
		//	cout<<value;
		//	return rev;
			
		}
		
		
	
		
	
};



int main (){

	int value;
	cout<<"Enter the values :"<<endl;
	cin>>value;
	Palindrome obj;

	obj.palindrome(value);

}
