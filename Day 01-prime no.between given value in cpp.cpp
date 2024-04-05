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
				for (j=1;j<value;j++){
					if(i%j==0){
						//cout<<i<<j<<endl;
						count++;
					}
					
				}
				if (count<=2){
					cout<<i<<"is prime"<<endl;
				}else{
					count=0;
				}
				
			
			}
					
				
		}
		
};
	



int main(){
	
Classes obj;
obj.prime();
	
	
}


