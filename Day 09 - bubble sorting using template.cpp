  #include<iostream>

using namespace std;

template <class T, int size>

class Sorting{
	
	public:
		
		T arr[size];
		void inserting(){
			
			for(int i=0;i<size;i++){
				cout<<"Enter "<<i+1<< " value"<<"\t";
				cin>>arr[i];
			}
			
			
		}
		
		void sorting(){
			 
			int temp=0;
			for (int i=0;i<size;i++){
				for (int j=i+1;j<size;j++){
				
					if(arr[i]>arr[j]){
						temp=arr[j];
						arr[j]=arr[i];
						arr[i]=temp;
					}
				
				}
						
			}
		}
		
		
		
		void show(){
			
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
			}
			
		}
	
	
};

int main(){
	/*Sorting<int,5> t1;
	t1.inserting();
	t1.sorting();
	t1.show();
	*/
	
	
	/*Sorting<char,5> t;
	t.inserting();
	t.sorting();
	t.show();
	return 0;
	*/
	
	Sorting<float,5> t;
	t.inserting();
	t.sorting();
	t.show();
	return 0;
	
}
