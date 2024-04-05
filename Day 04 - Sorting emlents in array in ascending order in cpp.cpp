 #include<iostream>

using namespace std;
class Sorting{
	
	public:

		int arr1[];
		int sorting(int arr1[]){
		int temp=0;
		for (int i=0;i<5;i++){
			for (int j=i+1;j<5;j++){
				
				if(arr1[i]>arr1[j]){
					temp=arr1[j];
					arr1[j]=arr1[i];
					arr1[i]=temp;
				}
				
			}
				
			
			
			
		}
		
		for(int i=0;i<5;i++)
		cout<<arr1[i]<<"\t";
		
		
		
		
			
		}
		void display(){
			
		}
		
	
		
	
};



int main (){
	int arr[5];
	
	//int value;
	
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<"value"<<endl;
		cin>>arr[i];	
		
	}
	Sorting s1;
	s1.sorting(arr);
	s1.display();

}
