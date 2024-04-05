#include<iostream>
using namespace std;
namespace first_nm{
	
	
	int a=10;
	void show(){
		cout<<a<<endl;
		cout<<"inside first namespace";	
		
	}	
	
}


//using namespace first_nm;
using namespace first_nm :: second_nm;
int main(){
//	display();
	first_nm::show();
}

