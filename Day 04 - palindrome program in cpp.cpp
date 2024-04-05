#include<iostream>

using namespace std;
class Unit_Element_Summision{
	
	public:
//	int value;
		
		int unit_element_summision(int value){
			int i=0;
			int num=value;
			int temp;
			int rev=0;
			
			while(num!=0){
				temp=num%10;
				rev=rev*10 +temp;
				num=num/10;
				
				
			}
				
			if(value == rev){
				cout<<"unit_element_summision";
					
			}else{
				cout<<"not palindorme";
			}
			
		
		
		//	cout<<value;
			return rev;
			
		}
		
		
	
		
	
};



int main (){

	int value;
	cout<<"Enter the values :"<<endl;
	cin>>value;
	Unit_Element_Summision obj;

	obj.unit_element_summision(value);

}
