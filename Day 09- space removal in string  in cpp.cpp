#include<iostream>
#include<string.h>

using namespace std;
class User_strrev{
	
	public:
		
		int strrev(){
			
		char str[20]= "Rohit and Aryman";
		char* str2;
	
		int len = strlen(str);
		//cout<<sizeof(str);
		int count=0;
			for(int i=0;i<len-1;i++){
				//cout<<sizeof(str);
				count++;
				
				if(str[i]==32){
//					if(str[len]=='\0'){
//					break;
//				}
					
					str[i]=str[i+1];
					//cout<<count;
				}
//				else{
//					str2[i]==str[i];
//				
//				}
//				
				cout<<str[i];
					//cout<<str2[i];
			}
			//cout<<sizeof(str);
		}
	
};

int main (){
 	User_strrev obj;
 	obj.strrev();

}
