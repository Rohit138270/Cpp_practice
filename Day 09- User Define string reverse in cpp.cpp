#include<iostream>
#include<string.h>

using namespace std;
class User_strrev{
	
	public:
		
		int strrev(){
			
		char* str = "Rohit";
	
		int len = strlen(str);
			for(int i=len-1;i>=0;i--){
				cout<<str[i];
	}
		}

	
	
		
	
};

int main (){
 	User_strrev obj;
 	obj.strrev();


}
