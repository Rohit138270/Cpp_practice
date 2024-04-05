#include<iostream>
using namespace std;

class Classes{

	public:
		void prime(){
			int value;
			int count=0;
			cin>>value;
			int i,j;
			for ( i=1;i<=value;i++){
				if(value%i==0){
						count++;
					}
			}
			if(count>2){
				cout<<"not a prime no.";
			}else {
				cout<<"prime no.";
			}
			
				
			}
		
};
	



int main(){
	
Classes obj;
obj.prime();
	
	
}


