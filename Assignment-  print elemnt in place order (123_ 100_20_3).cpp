#include<iostream>

using namespace std;
class Unit_Element_Summision{
	
	public:
		
		int unit_element_summision(int value){
			int i=0;
			int num=value;
			int temp;
			int rev=0;
			int j=1;
			int arr[5];
			while(num!=0){
				temp=num%10;
				arr[i]=temp*j;
				num=num/10;
				j=j*10;
				i++;
			}
			for(int i=4;i>=0;i--){
			
				cout<<arr[i]<<"+";
			}
							
		}
	
};

int main (){

	int value;
	cout<<"Enter the values :"<<endl;
	cin>>value;
	Unit_Element_Summision obj;

	obj.unit_element_summision(value);

}
