#include<iostream>

using namespace std;

class two_D{
	
	public:
		int arr[3][3];
		
		void insert(){
			cout<<"Enter the values in 2D array:"<<endl;
			
			for (int i=0;i<3;i++){
				
				for(int j=0;j<3;j++){
					
					cout<<"value"<<i+1<<"\t";
					cin>>*(*(arr+i)+j);	
						
				}
							
			}
				
		}	
		
		void show(){
			
			for(int i=0;i<3;i++){
				
				for(int j=0;j<3;j++){
					
					cout<<*(*(arr+i)+j)<<"  ";
				}
				cout<<endl;
			}
			
		}
	
	
};
int main (){
	two_D obj;
	obj.insert();
	obj.show();
	
	
	
}
